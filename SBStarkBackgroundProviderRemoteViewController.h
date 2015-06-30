/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBUIStarkHomeScreenBackgroundHostInterface.h"
#import "SBUIStarkHomeScreenBackgroundProviderInterface.h"

@protocol SBStarkBackgroundProviderRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBStarkBackgroundProviderRemoteViewController : XXUnknownSuperclass <SBUIStarkHomeScreenBackgroundHostInterface, SBUIStarkHomeScreenBackgroundProviderInterface> {
	SBStarkBackgroundProvider *_provider;
	id<SBStarkBackgroundProviderRemoteViewControllerDelegate> _delegate;
}
@property(assign, nonatomic) id<SBStarkBackgroundProviderRemoteViewControllerDelegate> delegate;
@property(retain, nonatomic) SBStarkBackgroundProvider *provider;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void)dealloc;
- (void)setViewportFrame:(CGRect)frame;
- (void)switchToState:(id)state withAnimationName:(id)animationName;
- (void)viewServiceDidTerminateWithError:(id)viewService;
@end

