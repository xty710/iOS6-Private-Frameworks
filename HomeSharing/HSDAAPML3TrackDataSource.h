/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ML3TrackInsertionDataSource-Protocol.h"

@class NSArray, NSData;

@interface HSDAAPML3TrackDataSource : NSObject <ML3TrackInsertionDataSource>
{
    CDStruct_30baf813 _parsedValues[256];
    int _parsedValuesPropertyIndex[83];
    NSData *_itemsResponseData;
    NSArray *_rawItems;
    unsigned int _idx;
}

- (void)getCurrentTrackIntegrity:(struct sqlite3_context *)arg1;
- (void)getCurrentTrackCopyright:(struct sqlite3_context *)arg1;
- (double)currentTrackDateSkipped;
- (int)currentTrackBPM;
- (int)currentTrackAudioTrackIndex;
- (int)currentTrackAudioTrackID;
- (int)currentTrackAudioLanguage;
- (void)getCurrentTrackPodcastExternalGUID:(struct sqlite3_context *)arg1;
- (void)getCurrentTrackStoreURL:(struct sqlite3_context *)arg1;
- (void)getCurrentTrackStoreFlavor:(struct sqlite3_context *)arg1;
- (void)getCurrentTrackStoreLinkID:(struct sqlite3_context *)arg1;
- (void)getCurrentTrackStoreArtworkURL:(struct sqlite3_context *)arg1;
- (int)currentTrackSubtitleTrackIndex;
- (int)currentTrackSubtitleTrackID;
- (int)currentTrackSubtitleLanguage;
- (long long)currentTrackStoreXID;
- (long long)currentTrackStoreStoreKind;
- (long long)currentTrackStoreRedownloadedStatus;
- (long long)currentTrackStoreMatchedStatus;
- (long long)currentTrackPendingGeniusChecksum;
- (long long)currentTrackGlobalID;
- (long long)currentTrackGeniusChecksum;
- (void)getCurrentTrackDownloadIdentifier:(struct sqlite3_context *)arg1;
- (long long)currentTrackAudioFormat;
- (double)currentTrackRelativeVolume;
- (BOOL)currentTrackIsTemporaryCloudDownload;
- (BOOL)currentTrackIsOTAPurchased;
- (BOOL)currentTrackIsHidden;
- (BOOL)currentTrackIsDemoRental;
- (BOOL)currentTrackIsAudibleAudioBook;
- (BOOL)currentTrackHasSubtitles;
- (BOOL)currentTrackHasAlternateAudio;
- (BOOL)currentTrackChosenByAutoFill;
- (void)getCurrentTrackCollectionDescription:(struct sqlite3_context *)arg1;
- (double)currentTrackDateLastUsed;
- (BOOL)currentTrackHasBeenPlayed;
- (void)getCurrentTrackLyrics:(struct sqlite3_context *)arg1;
- (id)currentTrackFilePath;
- (void)getCurrentTrackArtworkCacheID:(struct sqlite3_context *)arg1;
- (id)currentTrackArtworkCacheID;
- (void)getCurrentTrackTitle:(struct sqlite3_context *)arg1;
- (void)getCurrentTrackSortTitle:(struct sqlite3_context *)arg1;
- (void)getCurrentTrackNetworkName:(struct sqlite3_context *)arg1;
- (void)getCurrentTrackMovieInfo:(struct sqlite3_context *)arg1;
- (void)getCurrentTrackLongDescription:(struct sqlite3_context *)arg1;
- (void)getCurrentTrackGrouping:(struct sqlite3_context *)arg1;
- (id)currentTrackFeedURL;
- (void)getCurrentTrackFeedURL:(struct sqlite3_context *)arg1;
- (void)getCurrentTrackExtendedContentRating:(struct sqlite3_context *)arg1;
- (void)getCurrentTrackEQPreset:(struct sqlite3_context *)arg1;
- (int)currentTrackEpisodeSortID;
- (void)getCurrentTrackEpisodeID:(struct sqlite3_context *)arg1;
- (void)getCurrentTrackDescription:(struct sqlite3_context *)arg1;
- (void)getCurrentTrackComment:(struct sqlite3_context *)arg1;
- (void)getCurrentTrackChapterData:(struct sqlite3_context *)arg1;
- (void)getCurrentTrackCategory:(struct sqlite3_context *)arg1;
- (id)currentTrackTitle;
- (id)currentTrackSortTitle;
- (id)currentTrackSortSeriesName;
- (id)currentTrackSortComposer;
- (id)currentTrackSortArtist;
- (id)currentTrackSortAlbumArtist;
- (id)currentTrackSortAlbum;
- (id)currentTrackSeriesName;
- (void)getCurrentTrackRedownloadActionParameters:(struct sqlite3_context *)arg1;
- (id)currentTrackKind;
- (id)currentTrackGenre;
- (id)currentTrackComposer;
- (id)currentTrackComment;
- (id)currentTrackCategory;
- (id)currentTrackArtist;
- (id)currentTrackAlbumArtist;
- (id)currentTrackAlbum;
- (id)currentTrackSeasonNumber;
- (int)currentTrackYear;
- (int)currentTrackUserAlbumRating;
- (int)currentTrackUserRating;
- (int)currentTrackTrackNumber;
- (int)currentTrackTrackCount;
- (double)currentTrackTotalTimeMS;
- (double)currentTrackStopTimeMS;
- (double)currentTrackStartTimeMS;
- (int)currentTrackSkipCountUser;
- (int)currentTrackSkipCountRecent;
- (int)currentTrackSampleRate;
- (int)currentTrackPlayCountUser;
- (int)currentTrackPlayCountRecent;
- (int)currentTrackIsDownloading;
- (int)currentTrackDiscNumber;
- (int)currentTrackDiscCount;
- (BOOL)currentTrackIsUserDisabled;
- (int)currentTrackContentRating;
- (int)currentTrackBitRate;
- (double)currentTrackStoreDatePurchased;
- (double)currentTrackRentalStartDate;
- (double)currentTrackRentalPlaybackStartDate;
- (double)currentTrackDateReleased;
- (double)currentTrackDatePlayed;
- (double)currentTrackDateModified;
- (double)currentTrackDateAdded;
- (id)currentTrackChapterData;
- (unsigned long)currentTrackMediaType;
- (long long)currentTrackVolumeNormalization;
- (long long)currentTrackTotalSize;
- (long long)currentTrackStoreStorefrontID;
- (long long)currentTrackStoreSagaID;
- (long long)currentTrackStorePlaylistID;
- (long long)currentTrackStoreKeyVersions;
- (long long)currentTrackStoreKeyPlatformID;
- (long long)currentTrackStoreKeyID;
- (long long)currentTrackStoreItemID;
- (long long)currentTrackStoreGenreID;
- (long long)currentTrackStoreComposerID;
- (long long)currentTrackStoreArtistID;
- (long long)currentTrackStoreAccountID;
- (long long)currentTrackRentalPlaybackDuration;
- (long long)currentTrackRentalDuration;
- (long long)currentTrackRatingLevel;
- (long long)currentTrackPersistentID;
- (long long)currentTrackGaplessLastFrameResync;
- (long long)currentTrackGaplessHeuristicInfo;
- (long long)currentTrackGaplessEncodingDrain;
- (long long)currentTrackGaplessEncodingDelay;
- (long long)currentTrackDurationInSamples;
- (double)currentTrackBookmarkTimeMS;
- (BOOL)currentTrackRememberBookmarkTime;
- (BOOL)currentTrackIsRental;
- (BOOL)currentTrackIsPodcast;
- (BOOL)currentTrackIsITunesU;
- (BOOL)currentTrackIsHD;
- (BOOL)currentTrackIsCompilation;
- (BOOL)currentTrackExcludeFromShuffle;
- (void)seekToStart;
- (BOOL)hasNextTrack;
- (void)seekToNextTrack;
- (BOOL)mediaKindIsSupported:(unsigned int)arg1;
- (void)_parseCurrentItem;
- (void)postParseCurrentTrack;
- (void)dealloc;
- (id)initWithItemsResponseData:(id)arg1;

@end

