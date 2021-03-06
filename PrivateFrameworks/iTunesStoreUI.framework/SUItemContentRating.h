/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUItemContentRating : NSObject <NSCopying> {
    NSDictionary * _dictionary;
    int  _rank;
    NSString * _ratingDescription;
    NSString * _ratingLabel;
    int  _ratingSystem;
    SSItemArtworkImage * _ratingSystemLogo;
    BOOL  _shouldHideWhenRestricted;
}

@property (getter=isExplicitContent, nonatomic, readonly) BOOL explicitContent;
@property (nonatomic) int rank;
@property (nonatomic, copy) NSString *ratingDescription;
@property (nonatomic, copy) NSString *ratingLabel;
@property (nonatomic) int ratingSystem;
@property (nonatomic, copy) SSItemArtworkImage *ratingSystemLogo;
@property (getter=isRestricted, nonatomic, readonly) BOOL restricted;
@property (nonatomic) BOOL shouldHideWhenRestricted;

+ (int)ratingSystemFromString:(id)arg1;

- (BOOL)_isRatingSystemForApps:(int)arg1;
- (BOOL)_isRatingSystemForMovies:(int)arg1;
- (BOOL)_isRatingSystemForMusic:(int)arg1;
- (BOOL)_isRatingSystemForTV:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isExplicitContent;
- (BOOL)isRestricted;
- (int)rank;
- (id)ratingDescription;
- (id)ratingLabel;
- (int)ratingSystem;
- (id)ratingSystemLogo;
- (void)setRank:(int)arg1;
- (void)setRatingDescription:(id)arg1;
- (void)setRatingLabel:(id)arg1;
- (void)setRatingSystem:(int)arg1;
- (void)setRatingSystemLogo:(id)arg1;
- (void)setShouldHideWhenRestricted:(BOOL)arg1;
- (BOOL)shouldHideWhenRestricted;
- (id)valueForProperty:(id)arg1;

@end
