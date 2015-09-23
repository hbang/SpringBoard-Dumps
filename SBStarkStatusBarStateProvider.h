/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBStatusBarStateProvider.h"
#import "SpringBoard-Structs.h"

@protocol SBStarkSessionConfiguring;

__attribute__((visibility("hidden")))
@interface SBStarkStatusBarStateProvider : SBStatusBarStateProvider {
	id<SBStarkSessionConfiguring> _sessionConfiguration;
	BOOL _oldAggregatorTimeCString[64];
	BOOL _timeCString[64];
	NSDateFormatter *_timeFormatter;
	BOOL _showOptimalCellData;
	BOOL _showTapToRadar;
	BOOL _disableBattery;
	NSString *_inCallDetail;
}
+ (BOOL)_itemIsIgnored:(int)ignored;
- (id)initWithConfiguration:(id)configuration;
- (void)_callDurationChanged;
- (void)_composePostDataFromAggregatorData:(XXStruct_bjgjSD *)aggregatorData;
- (void)_resetTimeItemFormatter;
- (BOOL)_shouldPostForUpdatesToNonItemData:(const XXStruct_bjgjSD *)nonItemData;
- (BOOL)_shouldPostForVisitedItem:(int)visitedItem withUpdates:(BOOL)updates toAggregatorData:(const XXStruct_bjgjSD *)aggregatorData;
- (BOOL)_shouldShowRadarItem;
- (id)_timeFormatter;
- (void)dealloc;
- (id)doubleHeightStatusStringForStyle:(int)style;
@end

