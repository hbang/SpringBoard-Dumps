/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBUIQuietModePlayability.h"
#import "SBAwayListCellButtonHandler.h"


__attribute__((visibility("hidden")))
@interface SBAwayListItem : XXUnknownSuperclass <SBAwayListCellButtonHandler, SBUIQuietModePlayability, NSCopying> {
	NSDate *_timestamp;
	BOOL _isNewItem;
	SBLockScreenActionContext *_lockScreenActionContext;
	NSString *_buttonLabel;
}
@property(copy, nonatomic) NSString *buttonLabel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL isNewItem;
@property(readonly, assign) Class superclass;
@property(retain, nonatomic) NSDate *timestamp;
- (void)buttonPressed;
- (BOOL)canBeClearedByNotificationCenter;
- (id)copyWithZone:(NSZone *)zone;
- (void)dealloc;
- (BOOL)inertWhenLocked;
- (BOOL)isCritical;
- (BOOL)overridesQuietMode;
- (void)prepareWithCompletion:(id)completion;
- (BOOL)wantsHighlightOnInsert;
@end

