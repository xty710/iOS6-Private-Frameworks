/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MUMathExpressionBase.h>

@interface MUMathExpressionDoubleBased : MUMathExpressionBase
{
    struct FunctionInterpreter<double> *mInterpreter;
}

+ (double)invalidResult;
+ (double)evaluateString:(id)arg1 error:(id *)arg2;
- (BOOL)isValueIllegal:(double)arg1;
- (BOOL)isConstant;
- (id)stringValue;
- (double)evaluate;
- (void)replaceVariable:(id)arg1 withValue:(double)arg2;
- (void)resetAllVariables;
- (void)setVariableValues:(id)arg1;
- (double)valueForVariable:(id)arg1;
- (void)setValue:(double)arg1 forVariable:(id)arg2;
- (void)_resetVariableIndicies;
- (void)cleanup;
- (void)finalize;
- (void)dealloc;
- (id)initWithString:(id)arg1 error:(id *)arg2;
- (id)init;

@end

