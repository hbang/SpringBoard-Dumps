/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBActivityContinuationAction : XXUnknownSuperclass {
	NSDictionary *_settings;
	int launchSource;
	SBBestAppSuggestion *_appSuggestion;
}
@property(retain, nonatomic) SBBestAppSuggestion *appSuggestion;
@property(assign, nonatomic) int launchSource;
@property(readonly, assign, nonatomic) NSDictionary *settings;
- (id)initWithIdentifier:(id)identifier activityTypeIdentifier:(id)identifier2 appSuggestion:(id)suggestion launchSource:(int)source;
- (void)dealloc;
@end

