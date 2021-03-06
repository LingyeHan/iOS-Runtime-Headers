/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIGestureRecognizerTarget : NSObject {
    SEL  _action;
    id  _target;
}

@property (nonatomic, readonly) SEL action;
@property (nonatomic, readonly) id target;

+ (id)gestureTargetWithTarget:(id)arg1 action:(SEL)arg2;

- (void).cxx_destruct;
- (void)_sendActionWithGestureRecognizer:(id)arg1;
- (SEL)action;
- (id)description;
- (BOOL)isEqualToTarget:(id)arg1 action:(SEL)arg2;
- (id)target;

@end
