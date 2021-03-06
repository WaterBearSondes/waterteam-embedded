#ifndef WATERBEAR_INTERRUPTS
#define WATERBEAR_INTERRUPTS

void clearClockInterrupt();
void disableClockInterrupt();
void enableClockInterrupt();
void enableUserInterrupt();
void clearUserInterrupt();
void disableUserInterrupt();
void handleClockInterrupt();
void setupWakeInterrupts();
void userTriggeredInterrupt();
void clearAllInterrupts();
void clearAllPendingInterrupts();
void storeAllInterrupts(int& iser1, int& iser2, int& iser3);
void reenableAllInterrupts(int iser1, int iser2, int iser3);

extern bool awakenedByUser;

#endif