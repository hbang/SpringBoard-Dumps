/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBStatusBarStateProvider.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBStarkStatusBarStateProvider : SBStatusBarStateProvider {
}
+ (BOOL)_itemIsIgnored:(int)ignored;
- (void)_composePostDataFromAggregatorData:(XXStruct_8iXKhD *)aggregatorData;
- (BOOL)_shouldPostForUpdatesToNonItemData:(const XXStruct_8iXKhD *)nonItemData;
- (BOOL)_shouldPostForVisitedItem:(int)visitedItem withUpdates:(BOOL)updates toAggregatorData:(const XXStruct_8iXKhD *)aggregatorData;
@end

