/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class SCRCGestureFactory, SCRCTargetSelectorTimer;



@interface SCRCGestureFactory : NSObject 
{
    float _stallDistance;
    float _maxDimension;
    float _thumbRegion;
    NSInteger _orientation;
    NSInteger _directions[7];
    struct { 
        float horizontal; 
        float vertical; 
    } _axisFlipper;
    float _scaledTrackingDistance;
    BOOL _setTrackingTimer;
    float _flickVelocityThreshold;
    double _tapVelocityThreshold;
    double _echoWaitTime;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _mainFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _gutterFrame;
    double _lastTime;
    double _lastDownTime;
    double _lastGutterDownTime;
    float _lastDegrees;
    float _startDegrees;
    float _startDistance;
    BOOL _startedInGutter;
    double _requireDelayBeforeTracking;
    BOOL _requireUp;
    BOOL _thumbRejectionEnabled;
    float _thumbRejectionDistance;
    NSInteger _state;
    NSInteger _previousState;
    NSInteger _direction;
    struct SCRCFingerState { 
        NSUInteger identifier; 
        NSInteger xDirection; 
        NSInteger yDirection; 
        struct SCRCMathAverageValue { 
            NSUInteger samples; 
            float fifo[50]; 
            NSInteger fifoIndex; 
            float sum; 
            float average; 
            float current; 
        } velocity; 
        struct SCRCMathAverageValue { 
            NSUInteger samples; 
            float fifo[50]; 
            NSInteger fifoIndex; 
            float sum; 
            float average; 
            float current; 
        } slopeRise; 
        struct SCRCMathAverageValue { 
            NSUInteger samples; 
            float fifo[50]; 
            NSInteger fifoIndex; 
            float sum; 
            float average; 
            float current; 
        } slopeRun; 
        struct SCRCMathAverageValue { 
            NSUInteger samples; 
            float fifo[50]; 
            NSInteger fifoIndex; 
            float sum; 
            float average; 
            float current; 
        } distance; 
        float velocityDistance; 
        BOOL dragStalled; 
        struct CGPoint { 
            float x; 
            float y; 
        } startPoint; 
        struct CGPoint { 
            float x; 
            float y; 
        } lastPoint; 
        struct CGPoint { 
            float x; 
            float y; 
        } lastDownPoint; 
    } _finger[2];
    NSUInteger _absoluteFingerCount;
    unsigned short _fingerCount;
    unsigned short _lastFingerCount;
    float _distance;
    NSUInteger _tapCount;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _tapFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _tapMultiFrame;
    struct { 
        id track; 
        id tap; 
        id gutterUp; 
        id splitTap; 
    } _delegate;
    SCRCTargetSelectorTimer *_trackingTimer;
    struct { 
        BOOL down; 
        BOOL dead; 
        BOOL gutter; 
        NSUInteger current; 
        NSUInteger digits; 
        NSUInteger count; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } frame; 
        struct CGPoint { 
            float x; 
            float y; 
        } location[5]; 
        struct CGPoint { 
            float x; 
            float y; 
        } locationPerTap[5]; 
        NSUInteger digitsPerTap; 
        double thisTime; 
        double lastTime; 
    } _tap;
    SCRCTargetSelectorTimer *_tapTimer;
    SCRCTargetSelectorTimer *_gutterUpTimer;
    struct { 
        SCRCGestureFactory *factory; 
        BOOL isSplitting; 
        BOOL isTapping; 
        BOOL fastTrack; 
        BOOL tapDead; 
        BOOL timedOut; 
        BOOL active; 
        NSUInteger fingerIdentifier; 
        double fingerDownTime; 
        struct CGPoint { 
            float x; 
            float y; 
        } startTapLocation; 
        struct CGPoint { 
            float x; 
            float y; 
        } lastTapLocation; 
        struct CGPoint { 
            float x; 
            float y; 
        } primaryFingerLocation; 
        float tapDistance; 
        NSInteger state; 
    } _split;
}

@property BOOL thumbRejectionEnabled;


- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 delegate:(id)arg2;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 delegate:(id)arg2 threadKey:(id)arg3;
- (void)setFlickSpeed:(float)arg1;
- (float)flickSpeed;
- (void)setTapSpeed:(float)arg1;
- (float)tapSpeed;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_currentTapRect;
- (void)_updateMultiTapFrame;
- (void)_updateTapState;
- (void)_handleTap;
- (void)_enterTrackingMode:(id)arg1;
- (void)_handleGutterUp;
- (void)_processUpAndPost:(BOOL)arg1;
- (void)_updateStartWithPoint:(struct CGPoint { float x1; float x2; })arg1 time:(double)arg2;
- (BOOL)_handleSplitTap;
- (BOOL)_handleSplitEvent:(id)arg1;
- (void)handleGestureEvent:(id)arg1;
- (void)_down:(id)arg1;
- (void)_drag:(id)arg1;
- (void)_up;
- (NSInteger)gestureState;
- (float)vector;
- (NSUInteger)absoluteFingerCount;
- (BOOL)tapIsDown;
- (struct CGPoint { float x1; float x2; })rawLocation;
- (struct CGPoint { float x1; float x2; })endLocation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })tapFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })multiTapFrame;
- (struct CGPoint { float x1; float x2; })tapPoint;
- (struct CGPoint { float x1; float x2; })tapPointWeightedToSides;
- (double)tapInterval;
- (id)gestureStateString;
- (BOOL)thumbRejectionEnabled;
- (void)setThumbRejectionEnabled:(BOOL)arg1;
- (NSUInteger)fingerCount;
- (float)distance;
- (struct CGPoint { float x1; float x2; })startLocation;
- (void)reset;
- (NSInteger)direction;
- (float)velocity;
- (void)setOrientation:(NSInteger)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })mainFrame;
- (NSUInteger)tapCount;
- (NSInteger)orientation;
- (void)dealloc;

@end