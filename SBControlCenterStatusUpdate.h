/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBControlCenterStatusUpdate : XXUnknownSuperclass {
	NSString *_reason;
	NSArray *_statusStrings;
	int _type;
}
@property(copy, nonatomic) NSString *reason;
@property(copy, nonatomic) NSArray *statusStrings;
@property(assign, nonatomic) int type;
+ (id)statusUpdateWithString:(id)string reason:(id)reason;
- (id)init;
- (void)addStatusString:(id)string;
- (void)dealloc;
- (id)popStatusString;
@end

