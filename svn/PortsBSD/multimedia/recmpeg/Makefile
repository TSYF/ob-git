# Created by: ijliao
# $FreeBSD: head/multimedia/recmpeg/Makefile 444251 2017-06-25 00:29:09Z linimon $

PORTNAME=	recmpeg
PORTVERSION=	1.0.5
PORTREVISION=	1
CATEGORIES=	multimedia
MASTER_SITES=	SF/fame/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple video encoder

LIB_DEPENDS=	libfame.so:multimedia/libfame

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/recmpeg \
		man/man1/recmpeg.1.gz

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
