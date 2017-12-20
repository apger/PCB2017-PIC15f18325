/* 
 * File:   splunk.h
 * Author: japger
 *
 * Created on April 17, 2017, 5:02 AM
 */

#ifndef SPLUNK_H
#define	SPLUNK_H

#ifdef	__cplusplus
extern "C" {
#endif

typedef enum // define the modes for the state machine
{
   SLEEP,
   ON, 
   BLINK_SLOW,
   BLINK_FAST,
   RUN,
   RANDOM,
   RAILROAD,
   TAE
} state_type;


#ifdef	__cplusplus
}
#endif

#endif	/* SPLUNK_H */

