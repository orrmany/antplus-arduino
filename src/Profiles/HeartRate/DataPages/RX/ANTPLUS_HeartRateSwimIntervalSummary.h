#ifndef ANTPLUS_HEARTRATESWIMINTERVALSUMMARY_h
#define ANTPLUS_HEARTRATESWIMINTERVALSUMMARY_h

#include <BaseClasses/ANTPLUS_BaseDataPage.h>

#include "ANT.h"

class HeartRateSwimIntervalSummary : public HeartRateBaseMainDataPage {
public:
    HeartRateSwimIntervalSummary();
    uint8_t getIntervalAverageHeartRate();
    uint8_t getIntervalMaximumHeartRate();
    uint8_t getSessionAverageHeartRate();
}

#endif // ANTPLUS_HEARTRATESWIMINTERVALSUMMARY_h