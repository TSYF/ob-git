# $FreeBSD: head/devel/xcscope.el/Makefile 569232 2021-03-26 00:40:44Z jrm $

PORTNAME=	xcscope.el
DISTVERSIONPREFIX=	v
DISTVERSION=	1.5
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	jhb@FreeBSD.org
COMMENT=	Emacs minor mode for using cscope

LICENSE=	GPLv2+

RUN_DEPENDS=	cscope:devel/cscope

USES=		emacs
EMACS_NO_DEPENDS=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	dkogan

NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES=	${EMACS_SITE_LISPDIR}/xcscope.el

do-install:
	${INSTALL_DATA} ${WRKSRC}/xcscope.el \
		${STAGEDIR}${PREFIX}/${EMACS_SITE_LISPDIR}

.include <bsd.port.mk>
