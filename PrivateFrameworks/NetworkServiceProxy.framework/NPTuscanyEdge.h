/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPTuscanyEdge : NSObject <NSSecureCoding> {
    int  _currentOnRampIndex;
    BOOL  _dayPassPending;
    double  _distance;
    unsigned int  _index;
    NSString * _label;
    NPLocation * _location;
    NSString * _name;
    NSArray * _onRamps;
    id /* block */  _probeCompletionHandler;
    NWTCPConnection * _probeConnection;
    NPTunnelTuscanyEndpoint * _probeEndpoint;
    NSObject<OS_dispatch_source> * _probeTimer;
}

@property (readonly) NPTuscanyOnRamp *currentOnRamp;
@property int currentOnRampIndex;
@property BOOL dayPassPending;
@property double distance;
@property unsigned int index;
@property (readonly) NSString *label;
@property (readonly) NPLocation *location;
@property (readonly) NSString *name;
@property (readonly) int nextOnRampIndex;
@property (readonly) NSArray *onRamps;
@property (copy) id /* block */ probeCompletionHandler;
@property (retain) NWTCPConnection *probeConnection;
@property (readonly) NPTunnelTuscanyEndpoint *probeEndpoint;
@property (retain) NSObject<OS_dispatch_source> *probeTimer;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)cancelLatencyMeasurement;
- (int)compareByDistance:(id)arg1;
- (id)currentOnRamp;
- (int)currentOnRampIndex;
- (BOOL)dayPassPending;
- (id)description;
- (double)distance;
- (void)encodeWithCoder:(id)arg1;
- (id)getOnRamp:(int)arg1;
- (unsigned int)index;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 name:(id)arg2 index:(unsigned int)arg3 onRamps:(id)arg4 probeEndpoint:(id)arg5 location:(id)arg6;
- (BOOL)isEqual:(id)arg1;
- (id)label;
- (id)location;
- (void)measureLatency:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)name;
- (int)nextIndexWithCurrentIndex:(int)arg1 bound:(int)arg2;
- (int)nextOnRampIndex;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)onRamps;
- (void)pingPong:(id)arg1;
- (id /* block */)probeCompletionHandler;
- (id)probeConnection;
- (id)probeEndpoint;
- (id)probeTimer;
- (void)replaceOnRampAtIndex:(unsigned int)arg1 withOnRamp:(id)arg2;
- (void)setCurrentOnRampIndex:(int)arg1;
- (void)setDayPassPending:(BOOL)arg1;
- (void)setDistance:(double)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setProbeCompletionHandler:(id /* block */)arg1;
- (void)setProbeConnection:(id)arg1;
- (void)setProbeTimer:(id)arg1;

@end
