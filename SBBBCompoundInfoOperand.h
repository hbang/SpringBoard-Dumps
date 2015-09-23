/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



__attribute__((visibility("hidden")))
@interface SBBBCompoundInfoOperand : XXUnknownSuperclass {
	SBBBInfoOperand *_activeOperand;
	SBBBInfoOperand *_referenceOperand;
}
@property(readonly, assign, nonatomic) SBBBInfoOperand *activeOperand;
@property(readonly, assign, nonatomic) SBBBInfoOperand *referenceOperand;
@property(readonly, assign, nonatomic, getter=isSectionOperand) BOOL sectionOperand;
+ (id)compoundOperandWithOperand:(id)operand referenceOperand:(id)operand2;
- (id)initWithOperand:(id)operand operand:(id)operand2;
- (void)dealloc;
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
@end

