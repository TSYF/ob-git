# $FreeBSD: head/multimedia/flvstreamer/Makefile 395483 2015-08-28 13:39:56Z amdmi3 $

PORTNAME=	flvstreamer
PORTVERSION=	2.1.c.1
PORTREVISION=	1
CATEGORIES=	multimedia net
MASTER_SITES=	SAVANNAH/${PORTNAME}/source
DISTNAME=	${PORTNAME}-2.1c1

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Open source command-line RTMP client

USES=		gmake
ALL_TARGET=	posix
WRKSRC=		${WRKDIR}/${PORTNAME}
MAKE_ARGS=	THREADLIB="-lpthread" XCFLAGS="${CFLAGS}" XLDFLAGS="${LDFLAGS}"
PLIST_FILES=	bin/flvstreamer bin/streams
PORTDOCS=	ChangeLog ChangeLog.rtmpdump README

OPTIONS_DEFINE=	DOCS

do-install:
	cd ${WRKSRC} && ${INSTALL_PROGRAM} ${PLIST_FILES:S,^bin/,,} \
		${STAGEDIR}${PREFIX}/bin

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
