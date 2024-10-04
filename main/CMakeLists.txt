file(GLOB_RECURSE SOURCES "main.cpp" "tft.c" "mpu6050.cpp" "button.c" "apps/*.c")
idf_component_register(SRCS ${SOURCES} INCLUDE_DIRS ".")
