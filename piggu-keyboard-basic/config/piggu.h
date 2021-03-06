#define HAND_SENSE 12
#define RIGHT_HAND false
#define LEFT_HAND true

#define ALPHA_SENSE 20
#define ALPABETICAL false

// left hand pins

#define L_LED 11

#define L_S01 4
#define L_S02 5
#define L_S03 8
#define L_S04 13
#define L_S05 19
#define L_S06 0
#define L_S07 3
#define L_S08 6
#define L_S09 9
#define L_S10 14
#define L_S11 18
#define L_S12 1
#define L_S13 29
#define L_S14 2
#define L_S15 7
#define L_S16 10
#define L_S17 15
#define L_S18 17
#define L_S19 16
#define L_S20 30
#define L_S21 28
#define L_S22 24
#define L_S23 21

#define L_MASK (1<<L_S01 | \
 				1<<L_S02 | \
				1<<L_S03 | \
				1<<L_S04 | \
				1<<L_S05 | \
				1<<L_S06 | \
				1<<L_S07 | \
				1<<L_S08 | \
				1<<L_S09 | \
				1<<L_S10 | \
				1<<L_S11 | \
				1<<L_S12 | \
				1<<L_S13 | \
				1<<L_S14 | \
				1<<L_S15 | \
				1<<L_S16 | \
				1<<L_S17 | \
				1<<L_S18 | \
				1<<L_S19 | \
				1<<L_S20 | \
				1<<L_S21 | \
				1<<L_S22 | \
				1<<L_S23)

// right hand pins

#define R_LED 11

#define R_S01 14
#define R_S02 29
#define R_S03 0
#define R_S04 3
#define R_S05 6
#define R_S06 7
#define R_S07 15
#define R_S08 13
#define R_S09 28
#define R_S10 30
#define R_S11 2
#define R_S12 5
#define R_S13 8
#define R_S14 16
#define R_S15 10
#define R_S16 24
#define R_S17 21
#define R_S18 1
#define R_S19 4
#define R_S20 9
#define R_S21 19
#define R_S22 18
#define R_S23 17

#define R_MASK (1<<R_S01 | \
 				1<<R_S02 | \
				1<<R_S03 | \
				1<<R_S04 | \
				1<<R_S05 | \
				1<<R_S06 | \
				1<<R_S07 | \
				1<<R_S08 | \
				1<<R_S09 | \
				1<<R_S10 | \
				1<<R_S11 | \
				1<<R_S12 | \
				1<<R_S13 | \
				1<<R_S14 | \
				1<<R_S15 | \
				1<<R_S16 | \
				1<<R_S17 | \
				1<<R_S18 | \
				1<<R_S19 | \
				1<<R_S20 | \
				1<<R_S21 | \
				1<<R_S22 | \
				1<<R_S23)

#ifdef COMPILE_LEFT

#define PIPE_NUMBER 0

#define LED_PIN L_LED

#define S01 L_S01
#define S02 L_S02
#define S03 L_S03
#define S04 L_S04
#define S05 L_S05
#define S06 L_S06
#define S07 L_S07
#define S08 L_S08
#define S09 L_S09
#define S10 L_S10
#define S11 L_S11
#define S12 L_S12
#define S13 L_S13
#define S14 L_S14
#define S15 L_S15
#define S16 L_S16
#define S17 L_S17
#define S18 L_S18
#define S19 L_S19
#define S20 L_S20
#define S21 L_S21
#define S22 L_S22
#define S23 L_S23

#define INPUT_MASK L_MASK

#endif

#ifdef COMPILE_RIGHT

#define PIPE_NUMBER 1

#define LED_PIN R_LED

#define S01 R_S01
#define S02 R_S02
#define S03 R_S03
#define S04 R_S04
#define S05 R_S05
#define S06 R_S06
#define S07 R_S07
#define S08 R_S08
#define S09 R_S09
#define S10 R_S10
#define S11 R_S11
#define S12 R_S12
#define S13 R_S13
#define S14 R_S14
#define S15 R_S15
#define S16 R_S16
#define S17 R_S17
#define S18 R_S18
#define S19 R_S19
#define S20 R_S20
#define S21 R_S21
#define S22 R_S22
#define S23 R_S23

#define INPUT_MASK R_MASK

#endif



// Low frequency clock source to be used by the SoftDevice
#define NRF_CLOCK_LFCLKSRC      {.source        = NRF_CLOCK_LF_SRC_XTAL,            \
                                 .rc_ctiv       = 0,                                \
                                 .rc_temp_ctiv  = 0,                                \
                                 .xtal_accuracy = NRF_CLOCK_LF_XTAL_ACCURACY_20_PPM}
