/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBWindowHideRequest : XXUnknownSuperclass {
	NSString *_reason;
	SBWindowLevelRange_struct _windowLevelRange;
}
@property(copy) NSString *reason;
@property(assign) SBWindowLevelRange_struct windowLevelRange;
+ (id)hideRequestWithWindowLevelRange:(SBWindowLevelRange_struct)windowLevelRange reason:(id)reason;
- (id)description;
@end

