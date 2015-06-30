/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBWorkspaceAppsActivationRequest : XXUnknownSuperclass {
	NSArray *_applications;
	SBDisplayLayout *_displayLayout;
}
@property(readonly, assign, nonatomic) NSArray *applications;
@property(readonly, assign, nonatomic) SBDisplayLayout *displayLayout;
+ (id)fullScreenActivationRequestForApp:(id)app;
+ (id)homeScreenActivationRequest;
- (id)initWithApplications:(id)applications displayLayout:(id)layout;
- (void)dealloc;
@end
