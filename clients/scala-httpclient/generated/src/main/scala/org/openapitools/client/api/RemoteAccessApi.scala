/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.client.api

import java.text.SimpleDateFormat

import org.openapitools.client.model.ComputerSet
import org.openapitools.client.model.DefaultCrumbIssuer
import org.openapitools.client.model.FreeStyleBuild
import org.openapitools.client.model.FreeStyleProject
import org.openapitools.client.model.Hudson
import org.openapitools.client.model.ListView
import org.openapitools.client.model.Queue
import org.openapitools.client.{ApiInvoker, ApiException}

import collection.mutable
import com.sun.jersey.multipart.FormDataMultiPart
import com.sun.jersey.multipart.file.FileDataBodyPart
import com.wordnik.swagger.client._
import com.wordnik.swagger.client.ClientResponseReaders.Json4sFormatsReader._
import com.wordnik.swagger.client.RequestWriters.Json4sFormatsWriter._

import java.net.URI
import java.io.File
import java.util.Date
import java.util.TimeZone
import javax.ws.rs.core.MediaType

import scala.concurrent.ExecutionContext.Implicits.global
import scala.concurrent._
import scala.concurrent.duration._
import scala.collection.mutable.HashMap
import scala.util.{Failure, Success, Try}

import org.json4s._

class RemoteAccessApi(
  val defBasePath: String = "http://localhost",
  defApiInvoker: ApiInvoker = ApiInvoker
) {
  private lazy val dateTimeFormatter = {
    val formatter = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSSZ")
    formatter.setTimeZone(TimeZone.getTimeZone("UTC"))
    formatter
  }
  private val dateFormatter = {
    val formatter = new SimpleDateFormat("yyyy-MM-dd")
    formatter.setTimeZone(TimeZone.getTimeZone("UTC"))
    formatter
  }
  implicit val formats = new org.json4s.DefaultFormats {
    override def dateFormatter = dateTimeFormatter
  }
  implicit val stringReader: ClientResponseReader[String] = ClientResponseReaders.StringReader
  implicit val unitReader: ClientResponseReader[Unit] = ClientResponseReaders.UnitReader
  implicit val jvalueReader: ClientResponseReader[JValue] = ClientResponseReaders.JValueReader
  implicit val jsonReader: ClientResponseReader[Nothing] = JsonFormatsReader
  implicit val stringWriter: RequestWriter[String] = RequestWriters.StringWriter
  implicit val jsonWriter: RequestWriter[Nothing] = JsonFormatsWriter

  var basePath: String = defBasePath
  var apiInvoker: ApiInvoker = defApiInvoker

  def addHeader(key: String, value: String): mutable.HashMap[String, String] = {
    apiInvoker.defaultHeaders += key -> value
  }

  val config: SwaggerConfig = SwaggerConfig.forUrl(new URI(defBasePath))
  val client = new RestClient(config)
  val helper = new RemoteAccessApiAsyncHelper(client, config)

  /**
   * 
   * Retrieve computer details
   *
   * @param depth Recursion depth in response model 
   * @return ComputerSet
   */
  def getComputer(depth: Integer): Option[ComputerSet] = {
    val await = Try(Await.result(getComputerAsync(depth), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   *  asynchronously
   * Retrieve computer details
   *
   * @param depth Recursion depth in response model 
   * @return Future(ComputerSet)
   */
  def getComputerAsync(depth: Integer): Future[ComputerSet] = {
      helper.getComputer(depth)
  }

  /**
   * 
   * Retrieve CSRF protection token
   *
   * @return DefaultCrumbIssuer
   */
  def getCrumb(): Option[DefaultCrumbIssuer] = {
    val await = Try(Await.result(getCrumbAsync(), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   *  asynchronously
   * Retrieve CSRF protection token
   *
   * @return Future(DefaultCrumbIssuer)
   */
  def getCrumbAsync(): Future[DefaultCrumbIssuer] = {
      helper.getCrumb()
  }

  /**
   * 
   * Retrieve Jenkins details
   *
   * @return Hudson
   */
  def getJenkins(): Option[Hudson] = {
    val await = Try(Await.result(getJenkinsAsync(), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   *  asynchronously
   * Retrieve Jenkins details
   *
   * @return Future(Hudson)
   */
  def getJenkinsAsync(): Future[Hudson] = {
      helper.getJenkins()
  }

  /**
   * 
   * Retrieve job details
   *
   * @param name Name of the job 
   * @return FreeStyleProject
   */
  def getJob(name: String): Option[FreeStyleProject] = {
    val await = Try(Await.result(getJobAsync(name), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   *  asynchronously
   * Retrieve job details
   *
   * @param name Name of the job 
   * @return Future(FreeStyleProject)
   */
  def getJobAsync(name: String): Future[FreeStyleProject] = {
      helper.getJob(name)
  }

  /**
   * 
   * Retrieve job configuration
   *
   * @param name Name of the job 
   * @return String
   */
  def getJobConfig(name: String): Option[String] = {
    val await = Try(Await.result(getJobConfigAsync(name), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   *  asynchronously
   * Retrieve job configuration
   *
   * @param name Name of the job 
   * @return Future(String)
   */
  def getJobConfigAsync(name: String): Future[String] = {
      helper.getJobConfig(name)
  }

  /**
   * 
   * Retrieve job&#39;s last build details
   *
   * @param name Name of the job 
   * @return FreeStyleBuild
   */
  def getJobLastBuild(name: String): Option[FreeStyleBuild] = {
    val await = Try(Await.result(getJobLastBuildAsync(name), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   *  asynchronously
   * Retrieve job&#39;s last build details
   *
   * @param name Name of the job 
   * @return Future(FreeStyleBuild)
   */
  def getJobLastBuildAsync(name: String): Future[FreeStyleBuild] = {
      helper.getJobLastBuild(name)
  }

  /**
   * 
   * Retrieve job&#39;s build progressive text output
   *
   * @param name Name of the job 
   * @param number Build number 
   * @param start Starting point of progressive text output 
   * @return void
   */
  def getJobProgressiveText(name: String, number: String, start: String) = {
    val await = Try(Await.result(getJobProgressiveTextAsync(name, number, start), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   *  asynchronously
   * Retrieve job&#39;s build progressive text output
   *
   * @param name Name of the job 
   * @param number Build number 
   * @param start Starting point of progressive text output 
   * @return Future(void)
   */
  def getJobProgressiveTextAsync(name: String, number: String, start: String) = {
      helper.getJobProgressiveText(name, number, start)
  }

  /**
   * 
   * Retrieve queue details
   *
   * @return Queue
   */
  def getQueue(): Option[Queue] = {
    val await = Try(Await.result(getQueueAsync(), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   *  asynchronously
   * Retrieve queue details
   *
   * @return Future(Queue)
   */
  def getQueueAsync(): Future[Queue] = {
      helper.getQueue()
  }

  /**
   * 
   * Retrieve queued item details
   *
   * @param number Queue number 
   * @return Queue
   */
  def getQueueItem(number: String): Option[Queue] = {
    val await = Try(Await.result(getQueueItemAsync(number), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   *  asynchronously
   * Retrieve queued item details
   *
   * @param number Queue number 
   * @return Future(Queue)
   */
  def getQueueItemAsync(number: String): Future[Queue] = {
      helper.getQueueItem(number)
  }

  /**
   * 
   * Retrieve view details
   *
   * @param name Name of the view 
   * @return ListView
   */
  def getView(name: String): Option[ListView] = {
    val await = Try(Await.result(getViewAsync(name), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   *  asynchronously
   * Retrieve view details
   *
   * @param name Name of the view 
   * @return Future(ListView)
   */
  def getViewAsync(name: String): Future[ListView] = {
      helper.getView(name)
  }

  /**
   * 
   * Retrieve view configuration
   *
   * @param name Name of the view 
   * @return String
   */
  def getViewConfig(name: String): Option[String] = {
    val await = Try(Await.result(getViewConfigAsync(name), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   *  asynchronously
   * Retrieve view configuration
   *
   * @param name Name of the view 
   * @return Future(String)
   */
  def getViewConfigAsync(name: String): Future[String] = {
      helper.getViewConfig(name)
  }

  /**
   * 
   * Retrieve Jenkins headers
   *
   * @return void
   */
  def headJenkins() = {
    val await = Try(Await.result(headJenkinsAsync(), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   *  asynchronously
   * Retrieve Jenkins headers
   *
   * @return Future(void)
   */
  def headJenkinsAsync() = {
      helper.headJenkins()
  }

  /**
   * 
   * Create a new job using job configuration, or copied from an existing job
   *
   * @param name Name of the new job 
   * @param from Existing job to copy from (optional)
   * @param mode Set to &#39;copy&#39; for copying an existing job (optional)
   * @param jenkinsCrumb CSRF protection token (optional)
   * @param `contentType` Content type header application/xml (optional)
   * @param body Job configuration in config.xml format (optional)
   * @return void
   */
  def postCreateItem(name: String, from: Option[String] = None, mode: Option[String] = None, jenkinsCrumb: Option[String] = None, `contentType`: Option[String] = None, body: Option[String] = None) = {
    val await = Try(Await.result(postCreateItemAsync(name, from, mode, jenkinsCrumb, `contentType`, body), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   *  asynchronously
   * Create a new job using job configuration, or copied from an existing job
   *
   * @param name Name of the new job 
   * @param from Existing job to copy from (optional)
   * @param mode Set to &#39;copy&#39; for copying an existing job (optional)
   * @param jenkinsCrumb CSRF protection token (optional)
   * @param `contentType` Content type header application/xml (optional)
   * @param body Job configuration in config.xml format (optional)
   * @return Future(void)
   */
  def postCreateItemAsync(name: String, from: Option[String] = None, mode: Option[String] = None, jenkinsCrumb: Option[String] = None, `contentType`: Option[String] = None, body: Option[String] = None) = {
      helper.postCreateItem(name, from, mode, jenkinsCrumb, `contentType`, body)
  }

  /**
   * 
   * Create a new view using view configuration
   *
   * @param name Name of the new view 
   * @param jenkinsCrumb CSRF protection token (optional)
   * @param `contentType` Content type header application/xml (optional)
   * @param body View configuration in config.xml format (optional)
   * @return void
   */
  def postCreateView(name: String, jenkinsCrumb: Option[String] = None, `contentType`: Option[String] = None, body: Option[String] = None) = {
    val await = Try(Await.result(postCreateViewAsync(name, jenkinsCrumb, `contentType`, body), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   *  asynchronously
   * Create a new view using view configuration
   *
   * @param name Name of the new view 
   * @param jenkinsCrumb CSRF protection token (optional)
   * @param `contentType` Content type header application/xml (optional)
   * @param body View configuration in config.xml format (optional)
   * @return Future(void)
   */
  def postCreateViewAsync(name: String, jenkinsCrumb: Option[String] = None, `contentType`: Option[String] = None, body: Option[String] = None) = {
      helper.postCreateView(name, jenkinsCrumb, `contentType`, body)
  }

  /**
   * 
   * Build a job
   *
   * @param name Name of the job 
   * @param json  
   * @param token  (optional)
   * @param jenkinsCrumb CSRF protection token (optional)
   * @return void
   */
  def postJobBuild(name: String, json: String, token: Option[String] = None, jenkinsCrumb: Option[String] = None) = {
    val await = Try(Await.result(postJobBuildAsync(name, json, token, jenkinsCrumb), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   *  asynchronously
   * Build a job
   *
   * @param name Name of the job 
   * @param json  
   * @param token  (optional)
   * @param jenkinsCrumb CSRF protection token (optional)
   * @return Future(void)
   */
  def postJobBuildAsync(name: String, json: String, token: Option[String] = None, jenkinsCrumb: Option[String] = None) = {
      helper.postJobBuild(name, json, token, jenkinsCrumb)
  }

  /**
   * 
   * Update job configuration
   *
   * @param name Name of the job 
   * @param body Job configuration in config.xml format 
   * @param jenkinsCrumb CSRF protection token (optional)
   * @return void
   */
  def postJobConfig(name: String, body: String, jenkinsCrumb: Option[String] = None) = {
    val await = Try(Await.result(postJobConfigAsync(name, body, jenkinsCrumb), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   *  asynchronously
   * Update job configuration
   *
   * @param name Name of the job 
   * @param body Job configuration in config.xml format 
   * @param jenkinsCrumb CSRF protection token (optional)
   * @return Future(void)
   */
  def postJobConfigAsync(name: String, body: String, jenkinsCrumb: Option[String] = None) = {
      helper.postJobConfig(name, body, jenkinsCrumb)
  }

  /**
   * 
   * Delete a job
   *
   * @param name Name of the job 
   * @param jenkinsCrumb CSRF protection token (optional)
   * @return void
   */
  def postJobDelete(name: String, jenkinsCrumb: Option[String] = None) = {
    val await = Try(Await.result(postJobDeleteAsync(name, jenkinsCrumb), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   *  asynchronously
   * Delete a job
   *
   * @param name Name of the job 
   * @param jenkinsCrumb CSRF protection token (optional)
   * @return Future(void)
   */
  def postJobDeleteAsync(name: String, jenkinsCrumb: Option[String] = None) = {
      helper.postJobDelete(name, jenkinsCrumb)
  }

  /**
   * 
   * Disable a job
   *
   * @param name Name of the job 
   * @param jenkinsCrumb CSRF protection token (optional)
   * @return void
   */
  def postJobDisable(name: String, jenkinsCrumb: Option[String] = None) = {
    val await = Try(Await.result(postJobDisableAsync(name, jenkinsCrumb), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   *  asynchronously
   * Disable a job
   *
   * @param name Name of the job 
   * @param jenkinsCrumb CSRF protection token (optional)
   * @return Future(void)
   */
  def postJobDisableAsync(name: String, jenkinsCrumb: Option[String] = None) = {
      helper.postJobDisable(name, jenkinsCrumb)
  }

  /**
   * 
   * Enable a job
   *
   * @param name Name of the job 
   * @param jenkinsCrumb CSRF protection token (optional)
   * @return void
   */
  def postJobEnable(name: String, jenkinsCrumb: Option[String] = None) = {
    val await = Try(Await.result(postJobEnableAsync(name, jenkinsCrumb), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   *  asynchronously
   * Enable a job
   *
   * @param name Name of the job 
   * @param jenkinsCrumb CSRF protection token (optional)
   * @return Future(void)
   */
  def postJobEnableAsync(name: String, jenkinsCrumb: Option[String] = None) = {
      helper.postJobEnable(name, jenkinsCrumb)
  }

  /**
   * 
   * Stop a job
   *
   * @param name Name of the job 
   * @param jenkinsCrumb CSRF protection token (optional)
   * @return void
   */
  def postJobLastBuildStop(name: String, jenkinsCrumb: Option[String] = None) = {
    val await = Try(Await.result(postJobLastBuildStopAsync(name, jenkinsCrumb), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   *  asynchronously
   * Stop a job
   *
   * @param name Name of the job 
   * @param jenkinsCrumb CSRF protection token (optional)
   * @return Future(void)
   */
  def postJobLastBuildStopAsync(name: String, jenkinsCrumb: Option[String] = None) = {
      helper.postJobLastBuildStop(name, jenkinsCrumb)
  }

  /**
   * 
   * Update view configuration
   *
   * @param name Name of the view 
   * @param body View configuration in config.xml format 
   * @param jenkinsCrumb CSRF protection token (optional)
   * @return void
   */
  def postViewConfig(name: String, body: String, jenkinsCrumb: Option[String] = None) = {
    val await = Try(Await.result(postViewConfigAsync(name, body, jenkinsCrumb), Duration.Inf))
    await match {
      case Success(i) => Some(await.get)
      case Failure(t) => None
    }
  }

  /**
   *  asynchronously
   * Update view configuration
   *
   * @param name Name of the view 
   * @param body View configuration in config.xml format 
   * @param jenkinsCrumb CSRF protection token (optional)
   * @return Future(void)
   */
  def postViewConfigAsync(name: String, body: String, jenkinsCrumb: Option[String] = None) = {
      helper.postViewConfig(name, body, jenkinsCrumb)
  }

}

class RemoteAccessApiAsyncHelper(client: TransportClient, config: SwaggerConfig) extends ApiClient(client, config) {

  def getComputer(depth: Integer)(implicit reader: ClientResponseReader[ComputerSet]): Future[ComputerSet] = {
    // create path and map variables
    val path = (addFmt("/computer/api/json"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    queryParams += "depth" -> depth.toString

    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def getCrumb()(implicit reader: ClientResponseReader[DefaultCrumbIssuer]): Future[DefaultCrumbIssuer] = {
    // create path and map variables
    val path = (addFmt("/crumbIssuer/api/json"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]


    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def getJenkins()(implicit reader: ClientResponseReader[Hudson]): Future[Hudson] = {
    // create path and map variables
    val path = (addFmt("/api/json"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]


    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def getJob(name: String)(implicit reader: ClientResponseReader[FreeStyleProject]): Future[FreeStyleProject] = {
    // create path and map variables
    val path = (addFmt("/job/{name}/api/json")
      replaceAll("\\{" + "name" + "\\}", name.toString))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (name == null) throw new Exception("Missing required parameter 'name' when calling RemoteAccessApi->getJob")


    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def getJobConfig(name: String)(implicit reader: ClientResponseReader[String]): Future[String] = {
    // create path and map variables
    val path = (addFmt("/job/{name}/config.xml")
      replaceAll("\\{" + "name" + "\\}", name.toString))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (name == null) throw new Exception("Missing required parameter 'name' when calling RemoteAccessApi->getJobConfig")


    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def getJobLastBuild(name: String)(implicit reader: ClientResponseReader[FreeStyleBuild]): Future[FreeStyleBuild] = {
    // create path and map variables
    val path = (addFmt("/job/{name}/lastBuild/api/json")
      replaceAll("\\{" + "name" + "\\}", name.toString))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (name == null) throw new Exception("Missing required parameter 'name' when calling RemoteAccessApi->getJobLastBuild")


    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def getJobProgressiveText(name: String,
    number: String,
    start: String)(implicit reader: ClientResponseReader[Unit]): Future[Unit] = {
    // create path and map variables
    val path = (addFmt("/job/{name}/{number}/logText/progressiveText")
      replaceAll("\\{" + "name" + "\\}", name.toString)
      replaceAll("\\{" + "number" + "\\}", number.toString))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (name == null) throw new Exception("Missing required parameter 'name' when calling RemoteAccessApi->getJobProgressiveText")

    if (number == null) throw new Exception("Missing required parameter 'number' when calling RemoteAccessApi->getJobProgressiveText")

    if (start == null) throw new Exception("Missing required parameter 'start' when calling RemoteAccessApi->getJobProgressiveText")

    queryParams += "start" -> start.toString

    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def getQueue()(implicit reader: ClientResponseReader[Queue]): Future[Queue] = {
    // create path and map variables
    val path = (addFmt("/queue/api/json"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]


    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def getQueueItem(number: String)(implicit reader: ClientResponseReader[Queue]): Future[Queue] = {
    // create path and map variables
    val path = (addFmt("/queue/item/{number}/api/json")
      replaceAll("\\{" + "number" + "\\}", number.toString))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (number == null) throw new Exception("Missing required parameter 'number' when calling RemoteAccessApi->getQueueItem")


    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def getView(name: String)(implicit reader: ClientResponseReader[ListView]): Future[ListView] = {
    // create path and map variables
    val path = (addFmt("/view/{name}/api/json")
      replaceAll("\\{" + "name" + "\\}", name.toString))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (name == null) throw new Exception("Missing required parameter 'name' when calling RemoteAccessApi->getView")


    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def getViewConfig(name: String)(implicit reader: ClientResponseReader[String]): Future[String] = {
    // create path and map variables
    val path = (addFmt("/view/{name}/config.xml")
      replaceAll("\\{" + "name" + "\\}", name.toString))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (name == null) throw new Exception("Missing required parameter 'name' when calling RemoteAccessApi->getViewConfig")


    val resFuture = client.submit("GET", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def headJenkins()(implicit reader: ClientResponseReader[Unit]): Future[Unit] = {
    // create path and map variables
    val path = (addFmt("/api/json"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]


    val resFuture = client.submit("HEAD", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def postCreateItem(name: String,
    from: Option[String] = None,
    mode: Option[String] = None,
    jenkinsCrumb: Option[String] = None,
    `contentType`: Option[String] = None,
    body: Option[String] = None
    )(implicit reader: ClientResponseReader[Unit], writer: RequestWriter[Option[String]]): Future[Unit] = {
    // create path and map variables
    val path = (addFmt("/createItem"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (name == null) throw new Exception("Missing required parameter 'name' when calling RemoteAccessApi->postCreateItem")

    queryParams += "name" -> name.toString
    from match {
      case Some(param) => queryParams += "from" -> param.toString
      case _ => queryParams
    }
    mode match {
      case Some(param) => queryParams += "mode" -> param.toString
      case _ => queryParams
    }
    jenkinsCrumb match {
      case Some(param) => headerParams += "Jenkins-Crumb" -> param.toString
      case _ => headerParams
    }
    `contentType` match {
      case Some(param) => headerParams += "Content-Type" -> param.toString
      case _ => headerParams
    }

    val resFuture = client.submit("POST", path, queryParams.toMap, headerParams.toMap, writer.write(body))
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def postCreateView(name: String,
    jenkinsCrumb: Option[String] = None,
    `contentType`: Option[String] = None,
    body: Option[String] = None
    )(implicit reader: ClientResponseReader[Unit], writer: RequestWriter[Option[String]]): Future[Unit] = {
    // create path and map variables
    val path = (addFmt("/createView"))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (name == null) throw new Exception("Missing required parameter 'name' when calling RemoteAccessApi->postCreateView")

    queryParams += "name" -> name.toString
    jenkinsCrumb match {
      case Some(param) => headerParams += "Jenkins-Crumb" -> param.toString
      case _ => headerParams
    }
    `contentType` match {
      case Some(param) => headerParams += "Content-Type" -> param.toString
      case _ => headerParams
    }

    val resFuture = client.submit("POST", path, queryParams.toMap, headerParams.toMap, writer.write(body))
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def postJobBuild(name: String,
    json: String,
    token: Option[String] = None,
    jenkinsCrumb: Option[String] = None
    )(implicit reader: ClientResponseReader[Unit]): Future[Unit] = {
    // create path and map variables
    val path = (addFmt("/job/{name}/build")
      replaceAll("\\{" + "name" + "\\}", name.toString))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (name == null) throw new Exception("Missing required parameter 'name' when calling RemoteAccessApi->postJobBuild")

    if (json == null) throw new Exception("Missing required parameter 'json' when calling RemoteAccessApi->postJobBuild")

    queryParams += "json" -> json.toString
    token match {
      case Some(param) => queryParams += "token" -> param.toString
      case _ => queryParams
    }
    jenkinsCrumb match {
      case Some(param) => headerParams += "Jenkins-Crumb" -> param.toString
      case _ => headerParams
    }

    val resFuture = client.submit("POST", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def postJobConfig(name: String,
    body: String,
    jenkinsCrumb: Option[String] = None
    )(implicit reader: ClientResponseReader[Unit], writer: RequestWriter[String]): Future[Unit] = {
    // create path and map variables
    val path = (addFmt("/job/{name}/config.xml")
      replaceAll("\\{" + "name" + "\\}", name.toString))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (name == null) throw new Exception("Missing required parameter 'name' when calling RemoteAccessApi->postJobConfig")

    if (body == null) throw new Exception("Missing required parameter 'body' when calling RemoteAccessApi->postJobConfig")

    jenkinsCrumb match {
      case Some(param) => headerParams += "Jenkins-Crumb" -> param.toString
      case _ => headerParams
    }

    val resFuture = client.submit("POST", path, queryParams.toMap, headerParams.toMap, writer.write(body))
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def postJobDelete(name: String,
    jenkinsCrumb: Option[String] = None
    )(implicit reader: ClientResponseReader[Unit]): Future[Unit] = {
    // create path and map variables
    val path = (addFmt("/job/{name}/doDelete")
      replaceAll("\\{" + "name" + "\\}", name.toString))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (name == null) throw new Exception("Missing required parameter 'name' when calling RemoteAccessApi->postJobDelete")

    jenkinsCrumb match {
      case Some(param) => headerParams += "Jenkins-Crumb" -> param.toString
      case _ => headerParams
    }

    val resFuture = client.submit("POST", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def postJobDisable(name: String,
    jenkinsCrumb: Option[String] = None
    )(implicit reader: ClientResponseReader[Unit]): Future[Unit] = {
    // create path and map variables
    val path = (addFmt("/job/{name}/disable")
      replaceAll("\\{" + "name" + "\\}", name.toString))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (name == null) throw new Exception("Missing required parameter 'name' when calling RemoteAccessApi->postJobDisable")

    jenkinsCrumb match {
      case Some(param) => headerParams += "Jenkins-Crumb" -> param.toString
      case _ => headerParams
    }

    val resFuture = client.submit("POST", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def postJobEnable(name: String,
    jenkinsCrumb: Option[String] = None
    )(implicit reader: ClientResponseReader[Unit]): Future[Unit] = {
    // create path and map variables
    val path = (addFmt("/job/{name}/enable")
      replaceAll("\\{" + "name" + "\\}", name.toString))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (name == null) throw new Exception("Missing required parameter 'name' when calling RemoteAccessApi->postJobEnable")

    jenkinsCrumb match {
      case Some(param) => headerParams += "Jenkins-Crumb" -> param.toString
      case _ => headerParams
    }

    val resFuture = client.submit("POST", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def postJobLastBuildStop(name: String,
    jenkinsCrumb: Option[String] = None
    )(implicit reader: ClientResponseReader[Unit]): Future[Unit] = {
    // create path and map variables
    val path = (addFmt("/job/{name}/lastBuild/stop")
      replaceAll("\\{" + "name" + "\\}", name.toString))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (name == null) throw new Exception("Missing required parameter 'name' when calling RemoteAccessApi->postJobLastBuildStop")

    jenkinsCrumb match {
      case Some(param) => headerParams += "Jenkins-Crumb" -> param.toString
      case _ => headerParams
    }

    val resFuture = client.submit("POST", path, queryParams.toMap, headerParams.toMap, "")
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }

  def postViewConfig(name: String,
    body: String,
    jenkinsCrumb: Option[String] = None
    )(implicit reader: ClientResponseReader[Unit], writer: RequestWriter[String]): Future[Unit] = {
    // create path and map variables
    val path = (addFmt("/view/{name}/config.xml")
      replaceAll("\\{" + "name" + "\\}", name.toString))

    // query params
    val queryParams = new mutable.HashMap[String, String]
    val headerParams = new mutable.HashMap[String, String]

    if (name == null) throw new Exception("Missing required parameter 'name' when calling RemoteAccessApi->postViewConfig")

    if (body == null) throw new Exception("Missing required parameter 'body' when calling RemoteAccessApi->postViewConfig")

    jenkinsCrumb match {
      case Some(param) => headerParams += "Jenkins-Crumb" -> param.toString
      case _ => headerParams
    }

    val resFuture = client.submit("POST", path, queryParams.toMap, headerParams.toMap, writer.write(body))
    resFuture flatMap { resp =>
      process(reader.read(resp))
    }
  }


}
