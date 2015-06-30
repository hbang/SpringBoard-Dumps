/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@protocol SBCollectionViewCellDelegate;

__attribute__((visibility("hidden")))
@interface SBCollectionViewCell : XXUnknownSuperclass {
	id<SBCollectionViewCellDelegate> _delegate;
	BOOL _performSetHighlighted;
	BOOL _protectDelayedUnhighlights;
}
@property(assign, nonatomic) id<SBCollectionViewCellDelegate> delegate;
@property(assign, nonatomic) BOOL protectDelayedUnhighlights;
- (void)_didSetHighlighted:(BOOL)highlighted;
- (void)_performSetHighlighted;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)highlighted;
- (void)setHighlighted:(BOOL)highlighted afterDelay:(double)delay;
@end

