# Created by: Alexey Dokuchaev <danfe@regency.nsu.ru>
# $FreeBSD: head/multimedia/mmsclient/Makefile 347101 2014-03-05 09:34:50Z ehaupt $

PORTNAME=	mmsclient
PORTVERSION=	0.0.3
CATEGORIES=	multimedia audio net
MASTER_SITES=	http://ole.tange.dk/projekter/kontroversielt/www.geocities.com/majormms/ \
		http://freebsd.nsu.ru/distfiles/
DISTNAME=	mms_client-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tool to download Microsoft Media streams

LICENSE=	GPLv2

GNU_CONFIGURE=	yes
PLIST_FILES=	bin/mmsclient man/man1/mmsclient.1.gz

post-install:
	${INSTALL_MAN} ${FILESDIR}/mmsclient.1 ${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>
