/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBAppContextHostView : UIView {
	NSMutableArray *_contexts;
	BOOL _hostingEnabled;
}
@property(readonly, assign, nonatomic) unsigned count;
@property(assign, nonatomic, getter=isHostingEnabled) BOOL hostingEnabled;
- (id)initWithDefaultSize;
- (id)initWithFrame:(CGRect)frame;
- (void)_setLayerFrameAndTransform:(id)transform;
- (void *)createIOSurfaceForFrame:(CGRect)frame;
- (void *)createIOSurfaceForFrame:(CGRect)frame includeAdditionalContext:(unsigned)context outTransform:(CGAffineTransform *)transform;
- (void *)createIOSurfaceForFrame:(CGRect)frame includeAdditionalContext:(unsigned)context usePurpleGfx:(BOOL)gfx outTransform:(CGAffineTransform *)transform;
- (void *)createIOSurfaceForFrame:(CGRect)frame outTransform:(CGAffineTransform *)transform;
- (void)dealloc;
- (id)description;
- (void)didOrderOutContextWithId:(unsigned)anId;
- (BOOL)isContextIdHidden:(unsigned)hidden;
- (void)setContextId:(unsigned)anId hidden:(BOOL)hidden;
- (void)setOrderOutPending:(BOOL)pending forContextId:(unsigned)contextId;
- (void)willOrderInContextWithId:(unsigned)anId windowLevel:(float)level windowOutput:(int)output;
@end

