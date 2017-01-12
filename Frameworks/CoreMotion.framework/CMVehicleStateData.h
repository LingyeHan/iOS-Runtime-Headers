/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMVehicleStateData : NSObject <NSCopying, NSSecureCoding> {
    NSString * fDeviceId;
    CMMotionTimeRange * fTimeRange;
}

@property (nonatomic, readonly) NSString *deviceId;
@property (nonatomic, readonly) CMMotionTimeRange *timeRange;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeRange:(id)arg1 deviceId:(id)arg2;
- (id)timeRange;

@end