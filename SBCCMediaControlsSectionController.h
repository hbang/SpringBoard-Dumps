/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBControlCenterSectionViewController.h"
#import "SpringBoard-Structs.h"
#import "MPUSystemMediaControlsDelegate.h"


__attribute__((visibility("hidden")))
@interface SBCCMediaControlsSectionController : SBControlCenterSectionViewController <MPUSystemMediaControlsDelegate> {
	MPUSystemMediaControlsViewController *_systemMediaViewController;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (CGSize)contentSizeForOrientation:(int)orientation;
- (void)dealloc;
- (id)sectionIdentifier;
- (void)systemMediaControlsViewController:(id)controller didReceiveTapOnControlType:(int)type;
- (void)viewDidLoad;
@end

