/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIAlertViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface SBDeleteIconAlertItem : XXUnknownSuperclass <UIAlertViewDelegate> {
	SBIcon *_icon;
	BOOL _checkedDocumentsInCloudState;
	BOOL _appHasDocumentsInCloud;
	BOOL _appHasDocumentsWithPendingUpdates;
	BOOL _askedUserAboutDocumentsDocumentsInCloud;
	BOOL _askedUserAboutDocumentsWithPendingUpdates;
	BOOL _checkedForRelatedData;
	BOOL _finishedCheckingForRelatedData;
	BOOL _appHasHealthKitData;
	BOOL _appHasGameKitData;
	NSObject<OS_dispatch_semaphore> *_healthKitResponseSem;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithIcon:(id)icon;
- (void)_checkDocumentsInCloudStateIfNeeded;
- (BOOL)_hasRelatedData;
- (void)_startCheckingForRelatedExternalDataIfNeeded;
- (void)_waitForRelatedDataResponsesIfNeeded;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (BOOL)dismissOnLock;
- (id)icon;
- (BOOL)shouldShowInLockScreen;
@end

