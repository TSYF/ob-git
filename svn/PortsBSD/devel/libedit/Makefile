# Created by: jasone
# $FreeBSD: head/devel/libedit/Makefile 569210 2021-03-25 15:08:33Z bapt $

PORTNAME=	libedit
PORTVERSION=	${EDITVERSION}.${EDITDATE}
PORTEPOCH=	1
CATEGORIES=	devel
MASTER_SITES=	https://thrysoee.dk/editline/
DISTNAME=	${PORTNAME}-${EDITDATE}-${EDITVERSION}

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Command line editor library

LICENSE=	BSD2CLAUSE

USES=		libtool localbase ncurses pathfix
EDITVERSION=	3.1
EDITDATE=	20210216
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

CONFLICTS_INSTALL=	editline-*

post-install:
	${MV} ${STAGEDIR}${PREFIX}/man/man3/history.3 ${STAGEDIR}${PREFIX}/man/man3/el_history.3

.include <bsd.port.mk>
