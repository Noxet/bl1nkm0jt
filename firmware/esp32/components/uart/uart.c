
#include <string.h>
#include "driver/uart.h"
#include "driver/gpio.h"
#include "esp_log.h"

#include "xuart/uart.h"

#define SQ_UART_BAUDRATE	CONFIG_SQ_UART_BAUDRATE

void sq_uart_init()
{
	// TODO: Do not hard code baud
	uart_config_t uart_config = {
		.baud_rate = 9600,
		.data_bits = UART_DATA_8_BITS,
		.parity = UART_PARITY_DISABLE,
		.stop_bits = UART_STOP_BITS_1,
		.flow_ctrl = UART_HW_FLOWCTRL_DISABLE
	};

	// Configure UART parameters
	ESP_ERROR_CHECK(uart_param_config(UART_NUM_2, &uart_config));
	ESP_ERROR_CHECK(uart_set_pin(UART_NUM_2, 27, 25, UART_PIN_NO_CHANGE, UART_PIN_NO_CHANGE));
	ESP_ERROR_CHECK(uart_driver_install(UART_NUM_2, 256, 0, 0, NULL, 0));
}

void sq_uart_send(const char *data, size_t len)
{
#ifdef CONFIG_SQ_UART_DBG
	ESP_LOGI(TAG, "[%s] - Sending %d bytes of data: %s", __FUNCTION__, len, data);
#endif

	ESP_ERROR_CHECK(uart_wait_tx_done(UART_NUM_2, 1000));
	int res = uart_write_bytes(UART_NUM_2, data, len);
	ESP_ERROR_CHECK(uart_wait_tx_done(UART_NUM_2, 1000));

#ifdef CONFIG_SQ_UART_DBG
	if (res >= 0) {
		ESP_LOGI(TAG, "[%s] - Sent %d bytes of data", __FUNCTION__, res);
	} else {
		ESP_LOGI(TAG, "[%s] - Parameter error", __FUNCTION__);
	}
#endif
}
