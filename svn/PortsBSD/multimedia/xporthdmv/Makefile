# Created by: Steve Wills <steve@mouf.net>
# $FreeBSD: head/multimedia/xporthdmv/Makefile 347776 2014-03-10 16:25:33Z bapt $

PORTNAME=	xporthdmv
PORTVERSION=	1.01
CATEGORIES=	multimedia
MASTER_SITES=	http://www.w6rz.net/
DISTNAME=	xport

MAINTAINER=	swills@FreeBSD.org
COMMENT=	The xport Transport Stream Demuxer

USES=		zip
NO_WRKSUBDIR=	yes
PLIST_FILES=	bin/xporthdmv

do-build:
	${CC} ${CFLAGS} ${WRKSRC}/xport.c -o ${WRKSRC}/xporthdmv

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xporthdmv ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
