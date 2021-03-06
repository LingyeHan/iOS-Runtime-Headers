/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMRampToVideoZoomFactorCommand : CAMCaptureCommand {
    double  __duration;
    float  __rate;
    float  __videoZoomFactor;
}

@property (nonatomic, readonly) double _duration;
@property (nonatomic, readonly) float _rate;
@property (nonatomic, readonly) float _videoZoomFactor;

- (double)_duration;
- (float)_rate;
- (float)_videoZoomFactor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoZoomFactor:(float)arg1 duration:(double)arg2;
- (id)initWithVideoZoomFactor:(float)arg1 rate:(float)arg2;

@end
