//Autogenerated file
//MCU name: STM32L151C8
//MCU  xml: STM32L151C(6-8-B)Tx.xml
//GPIO remap/alternate function xml: GPIO-STM32L152x8_gpio_v1_0_Modes.xml

/*
const stm32_port_pin_type port_pin_list[] = {
  { GPIOA, GPIO_PIN_0 },
  { GPIOA, GPIO_PIN_1 },
  { GPIOA, GPIO_PIN_2 },
  { GPIOA, GPIO_PIN_3 },
  { GPIOA, GPIO_PIN_4 },
  { GPIOA, GPIO_PIN_5 },
  { GPIOA, GPIO_PIN_6 },
  { GPIOA, GPIO_PIN_7 },
  { GPIOA, GPIO_PIN_8 },
  { GPIOA, GPIO_PIN_9 },
  { GPIOA, GPIO_PIN_10},
  { GPIOA, GPIO_PIN_11},
  { GPIOA, GPIO_PIN_12},
  { GPIOA, GPIO_PIN_13},
  { GPIOA, GPIO_PIN_14},
  { GPIOA, GPIO_PIN_15},
  { GPIOB, GPIO_PIN_0 },
  { GPIOB, GPIO_PIN_1 },
  { GPIOB, GPIO_PIN_2 },
  { GPIOB, GPIO_PIN_3 },
  { GPIOB, GPIO_PIN_4 },
  { GPIOB, GPIO_PIN_5 },
  { GPIOB, GPIO_PIN_6 },
  { GPIOB, GPIO_PIN_7 },
  { GPIOB, GPIO_PIN_8 },
  { GPIOB, GPIO_PIN_9 },
  { GPIOB, GPIO_PIN_10},
  { GPIOB, GPIO_PIN_11},
  { GPIOB, GPIO_PIN_12},
  { GPIOB, GPIO_PIN_13},
  { GPIOB, GPIO_PIN_14},
  { GPIOB, GPIO_PIN_15},
  { GPIOC, GPIO_PIN_13},
  { GPIOC, GPIO_PIN_14},
  { GPIOC, GPIO_PIN_15},
  { GPIOH, GPIO_PIN_0 },
  { GPIOH, GPIO_PIN_1 },
};
*/

/*
enum {
   PA0 ,
   PA1 ,
   PA2 ,
   PA3 ,
   PA4 ,
   PA5 ,
   PA6 ,
   PA7 ,
   PA8 ,
   PA9 ,
   PA10,
   PA11,
   PA12,
   PA13,
   PA14,
   PA15,
   PB0 ,
   PB1 ,
   PB2 ,
   PB3 ,
   PB4 ,
   PB5 ,
   PB6 ,
   PB7 ,
   PB8 ,
   PB9 ,
   PB10,
   PB11,
   PB12,
   PB13,
   PB14,
   PB15,
   PC13,
   PC14,
   PC15,
   PH0 ,
   PH1 ,
NUM_PINS,
};
*/

const alternate_pin_type alternate_i2c_scl [] = {
//I2C1
    { I2C1  , GPIOB, GPIO_PIN_6  , GPIO_AF4_I2C1  }, 
    { I2C1  , GPIOB, GPIO_PIN_8  , GPIO_AF4_I2C1  }, 
//I2C2
    { I2C2  , GPIOB, GPIO_PIN_10 , GPIO_AF4_I2C2  }, 
}; 

const alternate_pin_type alternate_i2c_sda [] = {
//I2C1
    { I2C1  , GPIOB, GPIO_PIN_7  , GPIO_AF4_I2C1  }, 
    { I2C1  , GPIOB, GPIO_PIN_9  , GPIO_AF4_I2C1  }, 
//I2C2
    { I2C2  , GPIOB, GPIO_PIN_11 , GPIO_AF4_I2C2  }, 
}; 

const alternate_pin_type alternate_spi_miso [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_11 , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOA, GPIO_PIN_6  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_4  , GPIO_AF5_SPI1  }, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_14 , GPIO_AF5_SPI2  }, 
}; 

const alternate_pin_type alternate_spi_mosi [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_12 , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOA, GPIO_PIN_7  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_5  , GPIO_AF5_SPI1  }, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_15 , GPIO_AF5_SPI2  }, 
}; 

const alternate_pin_type alternate_spi_sck [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_5  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_3  , GPIO_AF5_SPI1  }, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_13 , GPIO_AF5_SPI2  }, 
}; 

const alternate_pin_type alternate_usart_rx [] = {
//USART1
    { USART1, GPIOA, GPIO_PIN_10 , GPIO_AF7_USART1}, 
    { USART1, GPIOB, GPIO_PIN_7  , GPIO_AF7_USART1}, 
//USART2
    { USART2, GPIOA, GPIO_PIN_3  , GPIO_AF7_USART2}, 
//USART3
    { USART3, GPIOB, GPIO_PIN_11 , GPIO_AF7_USART3}, 
}; 

const alternate_pin_type alternate_usart_tx [] = {
//USART1
    { USART1, GPIOA, GPIO_PIN_9  , GPIO_AF7_USART1}, 
    { USART1, GPIOB, GPIO_PIN_6  , GPIO_AF7_USART1}, 
//USART2
    { USART2, GPIOA, GPIO_PIN_2  , GPIO_AF7_USART2}, 
//USART3
    { USART3, GPIOB, GPIO_PIN_10 , GPIO_AF7_USART3}, 
}; 
