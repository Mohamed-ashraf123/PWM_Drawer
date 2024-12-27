

#ifndef TMR1_INTERFACE_H_
#define TMR1_INTERFACE_H_

#define FALLING											(0)
#define RISING											(1)

#define TMR1_NORMAL_OVER_FLOW	    		0
#define TMR1_CTC_COMPARE_MATCH_A			1
#define TMR1_CTC_COMPARE_MATCH_b			2
#define TMR1_INPUT_CAPT		            	3

                        /*************** APIS PROTOTYPES ***************/

void TMR1_voidInit       (void);
void TMR1_voidStart      (void);
void TMR1_voidStop       (void);
void TMR1_voidSetCallBack(void(*copy_pFunAction)(void), u8 copy_u8InterruptSource);

void TMR1_GetPWM(void);
void Time2String(f32 data);
void Freq2String(f32 data);

#endif /* TMR1_INTERFACE_H_ */
