/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCoalescedAsynchronousWriter : NSObject {
    id /* block */  _dataSourceBlock;
    NSObject<OS_dispatch_queue> * _diskAccessQueue;
    BOOL  _done;
    NSURL * _fileURL;
    NSObject<OS_dispatch_queue> * _internalQueue;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > { 
        struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > { 
            struct SuddenTerminationDisabler {} *__first_; 
        } __ptr_; 
    }  _suddenTerminationDisabler;
    NSTimer * _timer;
    double  _writeDelayInterval;
    NSObject<OS_dispatch_group> * _writeGroup;
    id /* block */  _writerBlock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_cancelPendingWriteSynchronouslyLeavingSuddenTerminationIntact;
- (id)_dataFromDataSource;
- (void)_invalidateTimer;
- (void)_scheduleTimer;
- (void)_timerFired:(id)arg1;
- (void)_waitForWriteCompletion;
- (void)_writeData:(id)arg1;
- (void)_writeDataAsynchronously:(id)arg1;
- (void)cancelPendingWriteSynchronously;
- (void)completePendingWriteSynchronously;
- (void)dealloc;
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceBlock:(id /* block */)arg3;
- (void)scheduleWrite;
- (void)startScheduledWriteNow;

@end
