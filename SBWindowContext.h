/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBWindowContext : XXUnknownSuperclass {
	unsigned _identifier;
	float _level;
	UIScreen *_screen;
	BOOL _orderOutPending;
}
@property(readonly, assign, nonatomic) unsigned identifier;
@property(readonly, assign, nonatomic) float level;
@property(assign, nonatomic, getter=isOrderOutPending) BOOL orderOutPending;
@property(readonly, assign, nonatomic) UIScreen *screen;
+ (id)contextWithIdentifier:(unsigned)identifier level:(float)level screen:(id)screen;
- (id)initWithIdentifier:(unsigned)identifier level:(float)level screen:(id)screen;
- (void)dealloc;
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
@end

