/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Stocks/XMLHTTPRequest.h>

@class NewsParserData, Stock, StockNewsItemCollection;

@interface NewsUpdater : XMLHTTPRequest
{
    id <NewsUpdaterDelegate> _delegate;
    BOOL _firstLoad;
    double _lastResponseTimestamp;
    StockNewsItemCollection *_lastNewsItemCollection;
    Stock *_stock;
    NewsParserData *_newsParserData;
}

+ (id)_newsItemCollectionCache;
+ (id)sharedNewsUpdater;
@property(nonatomic) __weak id <NewsUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)aggregateDictionaryDomain;
- (void)resetLocale;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (int)parseData:(id)arg1;
- (void)saveLastResponse;
- (BOOL)fetchNewsForStock:(id)arg1;
- (void)loadNewsCacheFromDiskForSymbol:(id)arg1;
- (void)clearNewsCacheOnDisk;
- (BOOL)shouldReloadOnResume;
- (void)cancel;
- (id)init;

@end

