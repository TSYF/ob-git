# Created by: osa
# $FreeBSD: head/multimedia/p5-Subtitles/Makefile 443761 2017-06-17 10:02:37Z sunpoet $

PORTNAME=	Subtitles
PORTVERSION=	1.04
PORTREVISION=	1
CATEGORIES=	multimedia perl5
MASTER_SITES=	CPAN/Prima/KARASIK
PKGNAMEPREFIX=	p5-

MAINTAINER=	osa@FreeBSD.org
COMMENT=	Perl5 backend for fix subtitles timing

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.if defined(WITH_SUBTITLES_SUBPLAY)
RUN_DEPENDS=	p5-Prima>=0:x11-toolkits/p5-Prima

PLIST_SUB+=	SUBPLAY=""
.else
PLIST_SUB+=	SUBPLAY="@comment "

post-patch:
	@${REINPLACE_CMD} -e "s|\('subs'\), 'subplay'|\1|" ${WRKSRC}/Makefile.PL
.endif

.include <bsd.port.mk>
