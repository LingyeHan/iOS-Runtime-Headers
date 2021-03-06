/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLMav4BasebandHardwareMessage : PLBasebandHardwareMessage {
    struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x1[2]; } * _mav4_adm;
    struct _PLMav4BasebandHWStatsARMPerf { unsigned int x1[8]; } * _mav4_armPerf;
    unsigned int  _mav4_duration;
    struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x1[2]; } * _mav4_gps;
    struct _PLMav4BasebandHWStatsHeader { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned int x7; } * _mav4_header;
    struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x1[2]; } * _mav4_mdm;
    struct _PLMav4BasebandHWStatsMDSP { unsigned int x1[5]; } * _mav4_mdsp;
    struct _PLMav4BasebandHWStatsQDSP { unsigned int x1[5]; } * _mav4_qdsp;
    struct _PLMav4BasebandHWStatsRX { unsigned int x1[5][4]; unsigned int x2[5][13]; unsigned int x3[5][13]; } * _mav4_rx;
    struct _PLMav4BasebandHWSleepVeto { unsigned char x1[4][13]; } * _mav4_sleep_arm;
    struct _PLMav4BasebandHWSleepVeto { unsigned char x1[4][13]; } * _mav4_sleep_qdsp;
    struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x1[2]; } * _mav4_spi;
    struct _PLMav4BasebandHWStatsSystem { unsigned int x1[3]; } * _mav4_system;
    struct _PLMav4BasebandHWStatsTX { unsigned int x1[5][12]; } * _mav4_tx;
    struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x1[2]; } * _mav4_uart;
    struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x1[2]; } * _mav4_usb;
}

@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x1[2]; }*adm;
@property (nonatomic) struct _PLMav4BasebandHWStatsARMPerf { unsigned int x1[8]; }*armPerf;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x1[2]; }*gps;
@property (nonatomic) struct _PLMav4BasebandHWStatsHeader { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned int x7; }*header;
@property (nonatomic, readonly) unsigned short hw_rev;
@property (nonatomic, readonly) unsigned char level;
@property unsigned int logDuration;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x1[2]; }*mdm;
@property (nonatomic) struct _PLMav4BasebandHWStatsMDSP { unsigned int x1[5]; }*mdsp;
@property (nonatomic) struct _PLMav4BasebandHWStatsQDSP { unsigned int x1[5]; }*qdsp;
@property (nonatomic) struct _PLMav4BasebandHWStatsRX { unsigned int x1[5][4]; unsigned int x2[5][13]; unsigned int x3[5][13]; }*rx;
@property (nonatomic) struct _PLMav4BasebandHWSleepVeto { unsigned char x1[4][13]; }*sleep_arm;
@property (nonatomic) struct _PLMav4BasebandHWSleepVeto { unsigned char x1[4][13]; }*sleep_qdsp;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x1[2]; }*spi;
@property (nonatomic, readonly) unsigned short sw_rev;
@property (nonatomic) struct _PLMav4BasebandHWStatsSystem { unsigned int x1[3]; }*system;
@property (nonatomic) struct _PLMav4BasebandHWStatsTX { unsigned int x1[5][12]; }*tx;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x1[2]; }*uart;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x1[2]; }*usb;

- (struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x1[2]; }*)adm;
- (struct _PLMav4BasebandHWStatsARMPerf { unsigned int x1[8]; }*)armPerf;
- (struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x1[2]; }*)gps;
- (struct _PLMav4BasebandHWStatsHeader { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned int x7; }*)header;
- (unsigned short)hw_rev;
- (id)indexToRAT:(unsigned int)arg1;
- (id)initWithData:(id)arg1;
- (unsigned char)level;
- (unsigned int)logDuration;
- (void)logHeaderWithLogger:(id)arg1;
- (void)logModemAppWithLogger:(id)arg1;
- (void)logPeripheralsWithLogger:(id)arg1;
- (void)logProcessorWithLogger:(id)arg1;
- (void)logRFWithLogger2:(id)arg1;
- (void)logSleepWithLogger:(id)arg1;
- (void)logWithLogger:(id)arg1;
- (struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x1[2]; }*)mdm;
- (struct _PLMav4BasebandHWStatsMDSP { unsigned int x1[5]; }*)mdsp;
- (void)parseData:(id)arg1;
- (struct _PLMav4BasebandHWStatsQDSP { unsigned int x1[5]; }*)qdsp;
- (struct _PLMav4BasebandHWStatsRX { unsigned int x1[5][4]; unsigned int x2[5][13]; unsigned int x3[5][13]; }*)rx;
- (void)setAdm:(struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x1[2]; }*)arg1;
- (void)setArmPerf:(struct _PLMav4BasebandHWStatsARMPerf { unsigned int x1[8]; }*)arg1;
- (void)setGps:(struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x1[2]; }*)arg1;
- (void)setHeader:(struct _PLMav4BasebandHWStatsHeader { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned int x7; }*)arg1;
- (void)setLogDuration:(unsigned int)arg1;
- (void)setMdm:(struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x1[2]; }*)arg1;
- (void)setMdsp:(struct _PLMav4BasebandHWStatsMDSP { unsigned int x1[5]; }*)arg1;
- (void)setQdsp:(struct _PLMav4BasebandHWStatsQDSP { unsigned int x1[5]; }*)arg1;
- (void)setRx:(struct _PLMav4BasebandHWStatsRX { unsigned int x1[5][4]; unsigned int x2[5][13]; unsigned int x3[5][13]; }*)arg1;
- (void)setSleep_arm:(struct _PLMav4BasebandHWSleepVeto { unsigned char x1[4][13]; }*)arg1;
- (void)setSleep_qdsp:(struct _PLMav4BasebandHWSleepVeto { unsigned char x1[4][13]; }*)arg1;
- (void)setSpi:(struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x1[2]; }*)arg1;
- (void)setSystem:(struct _PLMav4BasebandHWStatsSystem { unsigned int x1[3]; }*)arg1;
- (void)setTx:(struct _PLMav4BasebandHWStatsTX { unsigned int x1[5][12]; }*)arg1;
- (void)setUart:(struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x1[2]; }*)arg1;
- (void)setUsb:(struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x1[2]; }*)arg1;
- (struct _PLMav4BasebandHWSleepVeto { unsigned char x1[4][13]; }*)sleep_arm;
- (struct _PLMav4BasebandHWSleepVeto { unsigned char x1[4][13]; }*)sleep_qdsp;
- (struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x1[2]; }*)spi;
- (unsigned short)sw_rev;
- (struct _PLMav4BasebandHWStatsSystem { unsigned int x1[3]; }*)system;
- (struct _PLMav4BasebandHWStatsTX { unsigned int x1[5][12]; }*)tx;
- (struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x1[2]; }*)uart;
- (struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x1[2]; }*)usb;

@end
