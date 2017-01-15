#ifndef I2C_I2C_H_
#define I2C_I2C_H_

#define ACK 1
#define NACK 0

void i2cSetBitrate(uint16_t bitrateKHz);

void I2C_start(void);
void I2C_stop(void);
void I2C_write(uint8_t bajt);
uint8_t I2C_read(uint8_t ack);

void I2C_write_buf( uint8_t SLA, uint8_t adr, uint8_t len, uint8_t *buf );
void I2C_read_buf(uint8_t SLA, uint8_t adr, uint8_t len, uint8_t *buf);

#endif
