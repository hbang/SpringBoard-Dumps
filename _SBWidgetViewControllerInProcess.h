/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBWidgetViewController.h"
#import "_SBUIWidgetHost.h"


__attribute__((visibility("hidden")))
@interface _SBWidgetViewControllerInProcess : SBWidgetViewController <_SBUIWidgetHost> {
	_SBUIWidgetViewController *_widgetViewController;
}
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
@property(retain, nonatomic) _SBUIWidgetViewController *widgetViewController;
- (id)initWithWidgetIdentifier:(id)widgetIdentifier bundlePath:(id)path;
- (id)_newWidgetViewControllerWithIdentifier:(id)identifier bundlePath:(id)path;
- (void)dealloc;
- (void)hostDidDismiss;
- (void)hostDidPresent;
- (void)hostWillDismiss;
- (void)hostWillPresent;
- (void)invalidatePreferredViewSize;
- (void)requestLaunchOfURL:(id)url;
- (void)requestPreferredViewHeightWithHandler:(id)handler;
- (void)requestPresentationOfViewController:(id)viewController presentationStyle:(int)style context:(id)context completion:(id)completion;
- (void)updateContentWidth:(float)width;
- (void)viewDidLoad;
@end
