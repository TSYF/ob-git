# Created by: KIMURA Yasuhiro <yasu@utahime.org>
# $FreeBSD: head/devel/git-modes/Makefile 569232 2021-03-26 00:40:44Z jrm $

PORTNAME=	git-modes
DISTVERSION=	1.2.8
PORTREVISION=	5
PORTEPOCH=	1
CATEGORIES=	devel elisp
PKGNAMESUFFIX=	${EMACS_PKGNAMESUFFIX}

MAINTAINER=	yasu@utahime.org
COMMENT=	GNU Emacs modes for Git-related files

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	git:devel/git

USES=		emacs gmake
USE_GITHUB=	yes
GH_ACCOUNT=	magit
NO_ARCH=	yes
ALL_TARGET=	lisp

PORTDOCS=	README.md

OPTIONS_DEFINE=	DOCS

ELISPDIR=	${EMACS_VERSION_SITE_LISPDIR}/${PORTNAME}
PLIST_SUB=	ELISPDIR=${ELISPDIR}

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/${ELISPDIR}
	${INSTALL_DATA} ${WRKSRC}/*.el ${WRKSRC}/*.elc \
		${STAGEDIR}${PREFIX}/${ELISPDIR}

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.md ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
