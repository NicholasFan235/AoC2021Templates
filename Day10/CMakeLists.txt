
file(GLOB SRC_PATHS "*.cpp")

foreach(SRC_PATH ${SRC_PATHS})
    get_filename_component(SRC_NAME ${SRC_PATH} NAME_WLE)
    get_filename_component(TARGET_FOLDER ${SRC_PATH} DIRECTORY)
    get_filename_component(LAST_FOLDER ${TARGET_FOLDER} NAME)
    set(TARGET_NAME "${LAST_FOLDER}-${SRC_NAME}")
    add_executable(${TARGET_NAME} ${SRC_PATH})
    target_link_libraries(${TARGET_NAME} project_settings project_warnings)
    set_target_properties(${TARGET_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${TARGET_FOLDER})
    set_target_properties(${TARGET_NAME} PROPERTIES OUTPUT_NAME ${SRC_NAME}.exe)

endforeach(SRC_PATH ${SRC_PATHS})
