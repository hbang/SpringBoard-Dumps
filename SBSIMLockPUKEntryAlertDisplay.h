/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBSIMLockEntryAlertDisplay.h"

@class NSString;

@interface SBSIMLockPUKEntryAlertDisplay : SBSIMLockEntryAlertDisplay {
	int _state;
	NSString *_enteredPUKCode;
	NSString *_newPIN;
}
- (void)_attemptPUKUnlock;
- (id)_pukAttemptsRemainingLabel;
- (void)dealloc;
- (id)label;
- (void)setupFailureState;
- (void)setupSuccess;
- (id)titleText;
- (void)unlock;
@end

