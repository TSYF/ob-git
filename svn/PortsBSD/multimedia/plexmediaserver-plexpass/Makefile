# Created by: KalleDK <plexmaintainer@k-moeller.dk>
# $FreeBSD: head/multimedia/plexmediaserver-plexpass/Makefile 569069 2021-03-23 22:09:56Z feld $

PORTVERSION=	1.22.1.4228
DISTVERSIONSUFFIX=724c56e62
PORTREVISION=	0
MASTER_SITES=	https://downloads.plex.tv/plex-media-server-new/${DISTVERSION}-${DISTVERSIONSUFFIX}/freebsd/
PKGNAMESUFFIX=	-plexpass
DISTNAME=	PlexMediaServer-${DISTVERSION}-${DISTVERSIONSUFFIX}-FreeBSD-${ARCH}

MAINTAINER=	feld@FreeBSD.org

USE_RC_SUBR=	${PORTNAME}_plexpass

MASTERDIR=${.CURDIR}/../plexmediaserver

DISTINFO_FILE=	${.CURDIR}/distinfo
FILESDIR=	${.CURDIR}/files
DATADIR=	${PREFIX}/share/${PORTNAME}${PKGNAMESUFFIX}

SUB_LIST=	PORTNAME=${PORTNAME}_plexpass DATADIR=${DATADIR} USERS=${USERS} GROUPS=${GROUPS}

.include "${MASTERDIR}/Makefile"
