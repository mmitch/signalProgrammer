/*
 * clock.h - part of USBasp
 *
 * Autor..........: Thomas Fischl <tfischl@gmx.de>
 * Description....: Provides functions for timing/waiting
 * Licence........: GNU GPL v2 (see Readme.txt)
 * Creation Date..: 2005-02-23
 * Last change....: 2006-11-16
 */

#ifndef __clock_h_included__
#define	__clock_h_included__

#define F_CPU           F_OSC   /* 16MHz */
#define TIMERVALUE      TCNT0

/*
 * calculation:
 * 16000000 Hz -> prescaler 64 -> loop cycles with 250000 Hz 
 * -> 4µs per loop -> 80 loops = 320µs
 *
 * #define CLOCK_T_320us	( 320 / ( F_OSC / 64 ) )
 */
#define CLOCK_T_320us	80

/* set prescaler to 64 */
#define clockInit()  TCCR0B = (1 << CS01) | (1 << CS00);

/* wait time * 320 us */
void clockWait(uint8_t time);

#endif /* __clock_h_included__ */
