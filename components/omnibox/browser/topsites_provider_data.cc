/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "components/omnibox/browser/topsites_provider.h"
#include <stddef.h>


std::vector<std::string> TopSitesProvider::top_sites_ = {
  "google.com",
  "gmail.com",
  "mail.google.com",
  "maps.google.com",
  "calendar.google.com",
  "facebook.com",
  "youtube.com",
  "yahoo.com",
  "baidu.com",
  "wikipedia.org",
  "qq.com",
  "taobao.com",
  "twitter.com",
  "live.com",
  "linkedin.com",
  "sina.com.cn",
  "amazon.com",
  "amazon.ca",
  "hao123.com",
  "google.co.in",
  "blogspot.com",
  "weibo.com",
  "wordpress.com",
  "360.cn",
  "yandex.ru",
  "yahoo.co.jp",
  "bing.com",
  "tmall.com",
  "vk.com",
  "ebay.com",
  "sohu.com",
  "google.de",
  "pinterest.com",
  "163.com",
  "ask.com",
  "google.co.uk",
  "soso.com",
  "google.fr",
  "msn.com",
  "tumblr.com",
  "google.co.jp",
  "mail.ru",
  "instagram.com",
  "microsoft.com",
  "google.com.br",
  "google.ru",
  "paypal.com",
  "imdb.com",
  "google.es",
  "apple.com",
  "google.it",
  "xinhuanet.com",
  "amazon.co.jp",
  "craigslist.org",
  "neobux.com",
  "imgur.com",
  "stackoverflow.com",
  "ifeng.com",
  "google.com.mx",
  "bbc.co.uk",
  "google.com.hk",
  "adcash.com",
  "blogger.com",
  "news.ycombinator.com",
  "reddit.com",
  "slashdot.org",
  "digg.com",
  "duckduckgo.com",
  "startpage.com",
  "wolframalpha.com",
  "infogalactic.com",
  "qwant.com",
  "searx.me",
  "ecosia.org",
  "semanticscholar.org",
  "fc2.com",
  "cnn.com",
  "google.ca",
  "t.co",
  "akamaihd.net",
  "vube.com",
  "go.com",
  "people.com.cn",
  "wordpress.org",
  "about.com",
  "adobe.com",
  "alipay.com",
  "odnoklassniki.ru",
  "conduit.com",
  "youku.com",
  "googleusercontent.com",
  "gmw.cn",
  "google.com.tr",
  "flickr.com",
  "alibaba.com",
  "aliexpress.com",
  "godaddy.com",
  "huffingtonpost.com",
  "amazon.de",
  "google.com.au",
  "blogspot.in",
  "ebay.de",
  "netflix.com",
  "khanacademy.org",
  "kickass.to",
  "google.pl",
  "ku6.com",
  "bp.blogspot.com",
  "thepiratebay.se",
  "dailymotion.com",
  "weather.com",
  "vimeo.com",
  "dailymail.co.uk",
  "cnet.com",
  "espn.go.com",
  "ebay.co.uk",
  "rakuten.co.jp",
  "indiatimes.com",
  "themeforest.net",
  "aol.com",
  "amazonaws.com",
  "uol.com.br",
  "amazon.co.uk",
  "google.com.sa",
  "dropbox.com",
  "google.com.ar",
  "nytimes.com",
  "slideshare.net",
  "google.com.eg",
  "pixnet.net",
  "globo.com",
  "adf.ly",
  "china.com",
  "secureserver.net",
  "m2newmedia.com",
  "directrev.com",
  "buzzfeed.com",
  "mozilla.org",
  "wikimedia.org",
  "fiverr.com",
  "google.com.pk",
  "ameblo.jp",
  "booking.com",
  "google.nl",
  "livejournal.com",
  "deviantart.com",
  "yelp.com",
  "sogou.com",
  "google.com.tw",
  "flipkart.com",
  "wikia.com",
  "hootsuite.com",
  "blogfa.com",
  "developunit.info",
  "etsy.com",
  "outbrain.com",
  "wikihow.com",
  "avg.com",
  "google.co.th",
  "clkmon.com",
  "google.co.za",
  "stumbleupon.com",
  "soundcloud.com",
  "livedoor.com",
  "4shared.com",
  "w3schools.com",
  "badoo.com",
  "sourceforge.net",
  "files.wordpress.com",
  "archive.org",
  "mediafire.com",
  "google.co.ve",
  "theguardian.com",
  "liveinternet.ru",
  "bankofamerica.com",
  "addthis.com",
  "aweber.com",
  "forbes.com",
  "foxnews.com",
  "ask.fm",
  "answers.com",
  "indeed.com",
  "chase.com",
  "bet365.com",
  "salesforce.com",
  "gameforge.com",
  "china.com.cn",
  "hostgator.com",
  "naver.com",
  "espncricinfo.com",
  "skype.com",
  "google.gr",
  "github.com",
  "softonic.com",
  "statcounter.com",
  "google.com.co",
  "google.co.id",
  "reference.com",
  "onet.pl",
  "spiegel.de",
  "nicovideo.jp",
  "shutterstock.com",
  "google.be",
  "allegro.pl",
  "walmart.com",
  "google.com.ua",
  "google.com.vn",
  "google.com.ng",
  "mailchimp.com",
  "stackexchange.com",
  "sharelive.net",
  "so.com",
  "gamer.com.tw",
  "tripadvisor.com",
  "zillow.com",
  "wsj.com",
  "wix.com",
  "popads.net",
  "loading-delivery1.com",
  "google.ro",
  "wellsfargo.com",
  "wordreference.com",
  "goo.ne.jp",
  "bild.de",
  "photobucket.com",
  "pandora.com",
  "google.se",
  "bleacherreport.com",
  "pcpop.com",
  "media.tumblr.com",
  "naver.jp",
  "warriorforum.com",
  "babylon.com",
  "zedo.com",
  "weebly.com",
  "google.dz",
  "taringa.net",
  "blogspot.com.es",
  "google.at",
  "rutracker.org",
  "php.net",
  "google.com.ph",
  "ups.com",
  "39.net",
  "leboncoin.fr",
  "mashable.com",
  "businessinsider.com",
  "goodreads.com",
  "quikr.com",
  "usatoday.com",
  "dmm.co.jp",
  "ucoz.ru",
  "gmx.net",
  "rambler.ru",
  "rediff.com",
  "domaintools.com",
  "telegraph.co.uk",
  "google.com.pe",
  "comcast.net",
  "intuit.com",
  "kaskus.co.id",
  "tianya.cn",
  "avito.ru",
  "ettoday.net",
  "thefreedictionary.com",
  "wp.pl",
  "ikea.com",
  "google.ch",
  "amazon.fr",
  "lpcloudsvr302.com",
  "goal.com",
  "hurriyet.com.tr",
  "uploaded.net",
  "ndtv.com",
  "baomihua.com",
  "usps.com",
  "xcar.com.cn",
  "coccoc.com",
  "moz.com",
  "google.cl",
  "google.pt",
  "iqiyi.com",
  "pchome.net",
  "codecanyon.net",
  "adrotator.se",
  "goodgamestudios.com",
  "twitch.tv",
  "google.com.bd",
  "ci123.com",
  "google.com.sg",
  "huanqiu.com",
  "fedex.com",
  "nbcnews.com",
  "web.de",
  "onclickads.net",
  "it168.com",
  "bitly.com",
  "google.ae",
  "washingtonpost.com",
  "ehow.com",
  "milliyet.com.tr",
  "google.co.kr",
  "suning.com",
  "enet.com.cn",
  "9gag.com",
  "delta-search.com",
  "hp.com",
  "disqus.com",
  "samsung.com",
  "sochi2014.com",
  "bitauto.com",
  "xuite.net",
  "daum.net",
  "meetup.com",
  "varzesh3.com",
  "olx.in",
  "myntra.com",
  "snapdeal.com",
  "scribd.com",
  "extratorrent.cc",
  "infusionsoft.com",
  "4dsply.com",
  "mercadolivre.com.br",
  "tmz.com",
  "orange.fr",
  "google.cz",
  "reuters.com",
  "constantcontact.com",
  "chinaz.com",
  "nih.gov",
  "eazel.com",
  "accuweather.com",
  "java.com",
  "hulu.com",
  "bloomberg.com",
  "free.fr",
  "xywy.com",
  "detik.com",
  "libero.it",
  "speedtest.net",
  "mobile01.com",
  "clickbank.com",
  "microsoftonline.com",
  "yandex.com",
  "yandex.ua",
  "gsmarena.com",
  "bluehost.com",
  "bbc.com",
  "time.com",
  "webmd.com",
  "marca.com",
  "hudong.com",
  "kooora.com",
  "histats.com",
  "caijing.com.cn",
  "xing.com",
  "americanexpress.com",
  "kwejk.pl",
  "ad6media.fr",
  "cj.com",
  "in.com",
  "bestbuy.com",
  "zippyshare.com",
  "mywebsearch.com",
  "google.co.hu",
  "nba.com",
  "adnxs.com",
  "elpais.com",
  "amazon.cn",
  "intoday.in",
  "tinyurl.com",
  "google.no",
  "ign.com",
  "cloudfront.net",
  "hdfcbank.com",
  "ebay.in",
  "snapdo.com",
  "lenta.ru",
  "techcrunch.com",
  "google.ie",
  "getresponse.com",
  "force.com",
  "irs.gov",
  "tagged.com",
  "zendesk.com",
  "pof.com",
  "rt.com",
  "cnzz.com",
  "repubblica.it",
  "google.az",
  "douban.com",
  "plugrush.com",
  "groupon.com",
  "siteadvisor.com",
  "google.cn",
  "seznam.cz",
  "ero-advertising.com",
  "kakaku.com",
  "w3.org",
  "elmundo.es",
  "xe.com",
  "feedly.com",
  "list-manage.com",
  "t-online.de",
  "dell.com",
  "nydailynews.com",
  "amazon.in",
  "cntv.cn",
  "ameba.jp",
  "jrj.com.cn",
  "surveymonkey.com",
  "target.com",
  "yaolan.com",
  "ebay.com.au",
  "odesk.com",
  "uimserv.net",
  "okcupid.com",
  "ce.cn",
  "rbc.ru",
  "doorblog.jp",
  "joomla.org",
  "doubleclick.com",
  "upworthy.com",
  "habrahabr.ru",
  "zimbio.com",
  "life.com.tw",
  "naukri.com",
  "istockphoto.com",
  "aili.com",
  "zing.vn",
  "ebay.it",
  "jimdo.com",
  "fbcdn.net",
  "blogspot.de",
  "google.co.il",
  "mama.cn",
  "google.dk",
  "blackhatworld.com",
  "webmoney.ru",
  "lenovo.com",
  "flipora.com",
  "freelancer.com",
  "latimes.com",
  "gazeta.pl",
  "justdial.com",
  "eyny.com",
  "match.com",
  "pcbaby.com.cn",
  "retailmenot.com",
  "4399.com",
  "drudgereport.com",
  "quora.com",
  "abcnews.go.com",
  "informer.com",
  "att.com",
  "mysearchdial.com",
  "sahibinden.com",
  "google.fi",
  "capitalone.com",
  "elance.com",
  "icicibank.com",
  "ck101.com",
  "teensdigest.com",
  "goo.gl",
  "probux.com",
  "issuu.com",
  "ig.com.br",
  "twoo.com",
  "qtrax.com",
  "pch.com",
  "blogspot.ru",
  "lifehacker.com",
  "subscene.com",
  "jabong.com",
  "blogspot.it",
  "jd.com",
  "hypergames.net",
  "xda-developers.com",
  "livescore.com",
  "empowernetwork.com",
  "iminent.com",
  "xgo.com.cn",
  "irctc.co.in",
  "sberbank.ru",
  "foxsports.com",
  "kinopoisk.ru",
  "exoclick.com",
  "rednet.cn",
  "pcgames.com.cn",
  "ning.com",
  "lady8844.com",
  "wideinfo.org",
  "webcrawler.com",
  "yesky.com",
  "trulia.com",
  "zeobit.com",
  "searchfun.in",
  "babytree.com",
  "youm7.com",
  "123rf.com",
  "commentcamarche.net",
  "brave.com",
  "gab.com",
  "dissenter.com"
};
