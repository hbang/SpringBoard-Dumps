/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@interface SBSpeechTokenInterpretation : SBPhraseInterpretation {
	NSArray *_speechTokens;
}
- (id)initWithSpeechTokens:(id)speechTokens;
- (void)dealloc;
- (BOOL)removeSpaceAfter;
- (BOOL)removeSpaceBefore;
- (id)text;
@end
