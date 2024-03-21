#include <stdint.h>
//defining the adresses of stm32f407 registers, copied from reference manuel of the MCU 

#define FLASH_register  0x40022000
#define FLASH_ACR_offset 0x00
#define FLASH_KEYR_offset 0x08
#define FLASH_SR_offset 0x10
#define FLASH_OPTR_offset 0x20

#define RCC_BASE_              0x40021000
#define RCC_CR_offset          (volatile uint32_t*) (RCC_BASE_ + 0x00)
#define RCC_ICSCR_offset       (volatile uint32_t*) (RCC_BASE_ + 0x04)
#define RCC_CFGR_offset        (volatile uint32_t*) (RCC_BASE_ + 0x08) 
#define RCC_PLLCFGR_offset     (volatile uint32_t*) (RCC_BASE_ + 0x0C) 
#define RCC_CRRCR_offset       (volatile uint32_t*) (RCC_BASE_ + 0x14)
#define RCC_CIER_offset        (volatile uint32_t*) (RCC_BASE_ + 0x18)
#define RCC_CIFR_offset        (volatile uint32_t*) (RCC_BASE_ + 0x1C)
#define RCC_CICR_offset        (volatile uint32_t*) (RCC_BASE_ + 0x20)
#define RCC_IOPRSTR_offset     (volatile uint32_t*) (RCC_BASE_ + 0x24)
#define RCC_AHBRSTR_offset     (volatile uint32_t*) (RCC_BASE_ + 0x28)
#define RCC_APBRSTR1_offset    (volatile uint32_t*) (RCC_BASE_ + 0x2C)
#define RCC_APBRSTR2_offset    (volatile uint32_t*) (RCC_BASE_ + 0x30)
#define RCC_IOPENR_offset      (volatile uint32_t*) (RCC_BASE_ + 0x34)
#define RCC_AHBENR_offset      (volatile uint32_t*) (RCC_BASE_ + 0x38)
#define RCC_APBENR1_offset     (volatile uint32_t*) (RCC_BASE_ + 0x3C)
#define RCC_APBENR2_offset     (volatile uint32_t*) (RCC_BASE_ + 0x40)
#define RCC_IOPSMENR_offset    (volatile uint32_t*) (RCC_BASE_ + 0x44)
#define RCC_AHBSMENR_offset    (volatile uint32_t*) (RCC_BASE_ + 0x48)
#define RCC_APBSMENR1_offset   (volatile uint32_t*) (RCC_BASE_ + 0x4C)
#define RCC_APBSMENR2_offset   (volatile uint32_t*) (RCC_BASE_ + 0x50)
#define RCC_CCIPR_offset       (volatile uint32_t*) (RCC_BASE_ + 0x54)
#define RCC_CCIPR2_offset      (volatile uint32_t*) (RCC_BASE_ + 0x58)
#define RCC_BDCR_offset        (volatile uint32_t*) (RCC_BASE_ + 0x5C)
#define RCC_CSR_offset         (volatile uint32_t*) (RCC_BASE_ + 0x60)
//#define RCC_CR_HSION_Pos 22
 

// Define the values to write to the CR register
//#define RCC_CR_HSION_Msk (1UL << RCC_CR_HSION_Pos)
//#define RCC_REG(REG_OFFSET) (*((volatile uint32_t *)(RCC_BASE_ + (0))))

 
#define true 0b1
#define false 0b0
//#define SET_BIT_(reg, bit) if ((bit)) { (reg) |= (bit) ; } else {(reg) &= (bit);}

typedef struct  __attribute__((packed)) {
    uint32_t reserved_0 :8;
    uint32_t HSION :1 ;
    uint32_t HSI_KERON : 1;
    uint32_t HSI_RDY : 1 ;
    uint32_t HSIDIV :  3;
    uint32_t reserved_1 :2;
    uint32_t HSE_ON :  1;
    uint32_t HSE_RDY : 1;
    uint32_t HSE_BYP : 1;
    uint32_t CNSS_ON : 1;
    uint32_t reserved_2 :2;
    uint32_t HSI48_ON :1;
    uint32_t HSI48_RDY :1;
    uint32_t PLLON :1;
    uint32_t PLL_RDY :1;
    uint32_t reserved_3 :6;
 //0b 0000 0011 0000 0000 0000 0101 0000 0000
  } RCC_CR_; 

typedef struct   __attribute__((packed)){
    uint32_t PLLSRC : 2 ;
    uint32_t reserved_0 :2;
    uint32_t PLLM : 3;
    uint32_t reserved_1 :1;
    uint32_t PLLN : 7 ;
    uint32_t reserved_2 :1;
    uint32_t PLL_PEN :  1;
    uint32_t PLLP :  5;
    uint32_t reserved_3 :2;
    uint32_t PLL_QEN : 1;
    uint32_t PLLQ : 3;
    uint32_t PLL_REN : 1;
    uint32_t PLLR :3;
   // 0b 001 1 001 0 00 00001 0 0 0001000 0 000 00 10
  } RCC_PLLCFGR_; 

typedef struct   __attribute__((packed)){
    uint32_t SW : 3 ;
    uint32_t SWS :3;
    uint32_t reserved_0 :2;
    uint32_t HPRE : 4;
    uint32_t PPRE : 3 ;
    uint32_t reserved_1 :1;
    uint32_t MCO2SEL :  4;
    uint32_t MCO2PRE :  4;
    uint32_t MCOSEL :   4;
    uint32_t MCOPPRE :  4;
    //0b00000000000000000000000000010 010
    } RCC_CFGR_; 

typedef struct  {
RCC_CR_ RCC_CR;
 
}RCC_struct; 
 
 
 




#define GPIOA_Base 0x50000000

#define GPIOX_MODER_offset 0x00
#define GPIOX_OTYPER_offset 0x04
#define GPIOX_OSPEEDR_offset 0x08
#define GPIOX_PUPDR_offset 0x0C
#define GPIOX_IDR_offset 0x10
#define GPIOX_ODR_offset 0x14
#define GPIOX_BSRR_offset 0x18
#define GPIOX_AFRH_offset 0x24
#define GPIOX_BRR_offset 0x28



