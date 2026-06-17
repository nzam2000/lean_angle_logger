get_filename_component(_zephyr_topdir "${CMAKE_CURRENT_LIST_DIR}/../zephyrproject" REALPATH)

get_filename_component(ZEPHYR_BASE "${_zephyr_topdir}/zephyr" REALPATH)
get_filename_component(ZEPHYR_SDK_INSTALL_DIR "${_zephyr_topdir}/zephyr-sdk" REALPATH)
