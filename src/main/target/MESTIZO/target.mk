F1_TARGETS  += $(TARGET)

TARGET_SRC = \
            drivers/accgyro/accgyro_mpu.c \
			drivers/accgyro/accgyro_spi_mpu9250.c \
			drivers/barometer/barometer_bmp280.c \
			drivers/compass/compass_ak8963.c